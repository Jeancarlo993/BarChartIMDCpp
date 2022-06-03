#include <iostream>
#include <fstream>
#include <string>
#include "bars.h"

///ler arquivo
void Bars::read_txt(std::string archive){
  std::cout << ">>> preparing to read input file" << std::endl;
  //struct de um bloco de informações
  One_block block; 
  //variável para armazenar o valor localmente
  int local_value;  
  //pair para amarzenar label e category localmente
  std::pair<std::string,std::string>local_pair_info; 
  //arquivo a ser lido
  archive_name+=archive;
  std::ifstream arq(archive_name);
  //string que vai ler cada linha do arquivo
  std::string info_line;
  //variável que vai indicar quantas linhas de informações foram lidas
  int tam=0;
  //abrindo o arquivo, lendo as informações e armazenando 
  std::cout<<archive_name<<std::endl;
  if (arq.is_open()){
    std::cout << ">>> processing data, please wait" << std::endl;
    //leitura das três primeiras linhas; 
    //linha do titulo
    getline(arq,info_line);
    title = info_line;
    //linha da unidade de medida
    getline(arq,info_line);
    unity = info_line;
    //linha do source
    getline(arq,info_line);
    source = info_line;
    //linha vazia
    getline(arq,info_line);
    //faz a leitura até o fim do arquivo
    while(!arq.eof()){
      //bloco por bloco
      getline(arq,info_line);                      //linha que diz o numero de infos
      block.number_of_bars= std::stoi(info_line);  //passando o numero de infos para block
      
      //lendo o bloco de informações e armazenando as informações no block
      for(int i=0;i < block.number_of_bars;i++){
	    std::cout << "Lendo arquivo... \r";
	    //tokenizar year
        getline(arq,info_line,','); //leu uma linha até a virgula
        block.year = info_line;
        //tokenizar label, será passado depois para o block
        getline(arq,info_line,','); //leu uma linha até a virgula
        local_pair_info.first = info_line;
        //tokenizar segunda parte do label
        getline(arq,info_line,','); //leu uma linha até a virgula
        local_pair_info.first += info_line;
        //tokenizar value, será passado depois para o block
        getline(arq,info_line,','); //leu uma linha até a virgula
        local_value = std::stoi(info_line); 
        //tokenizar category, será passado depois para o block
        getline(arq,info_line); //leu uma linha até a virgula
        local_pair_info.second = info_line;
        //passar informações para o block 
        block.bars_block.insert(std::pair<int, std::pair<std::string,std::string>>(local_value,local_pair_info));
        //maior valor
        block.max_value = block.bars_block.begin()->first;  
        //menor valor
        block.min_value = block.bars_block.rbegin()->first;
        //lixeira
        tam++;
      }
      //armazena o block no vector
      bars_box.push_back(block);
      getline(arq,info_line);  //linha em branco
    }
    arq.close();
    std::cout << ">>> input file successfuly read" << std::endl;
  }else{std::cout<<"Arquivo não encontrado"<<std::endl;}
};



