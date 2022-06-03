#include <iostream>
#include <fstream>
#include <string>
#include "bars.h"

///tela de abbertura do jogo
void Bars::welcome(){
  std::cout<<"=================================================="<<std::endl;
  std::cout<<"      Welcome to the Bar Chart Race, v.01 "<<std::endl;
  std::cout<<"              Coryright (C) 2022"<<std::endl;
  std::cout<<"=================================================="<<std::endl;
}


///ler arquivo
void Bars::read_txt(std::string archive){
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
  if (arq.is_open()){
    std::cout<<"Arquivo encontrado"<<std::endl;
    //exibe as  três primeiras linhas
    for(int i=0;i<4;i++){
      getline(arq,info_line);
      std::cout<<info_line<<std::endl;
    }
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
        //lixeira
        tam++;
      }
      //armazena o block no vector
      bars_box.push_back(block);
      getline(arq,info_line);  //linha em branco
    }
    arq.close();
    std::cout << "\nLeitura concluida!\n";
  }else{std::cout<<"Arquivo não encontrado"<<std::endl;}
};



