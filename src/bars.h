/************************************************************************! 
 * Essa classe armazena todas as informações coletadas nos arquivos      *
 * em uma estrutura de dados que representa o conjunto de blocos de      *
 * barras e comporta outra estrutura de dados que é o bloco de barras    *
 * que comporta a estrutura de dado de cada barra                        *
 *************************************************************************/
#include<iostream>
#include<vector>
#include<map>
///struct de um bloco de barras
struct One_block{  
  int number_of_bars;                  //!numero de barras do bloco
  std::string year;                            //!ano do bloco 
  //map por valor, com um pair representando rótulo e categoria. 
  /* 
      O map orderna automaticamente de forma crescente. Pode ser acessado
      usando iterators. Para inserção temos um método insert passando um 
      pair como argumento. No nosso caso seria um pair<int, pair<string,string>>.
      também podemos inserir assim bars_block[valor] = pair.
  */
  std::multimap<int,std::pair<std::string,std::string>,std::greater<int>> bars_block;
  int max_value;                       //!valor máximo do bloco
  int min_value;                       //!valor mínimo do bloco
};    

class Bars{
private:
  std::vector<One_block> bars_box;  //!comporta varios blocos de barras
  std::string archive_name="../data/"; //!nome do arquivo, vai ser recebido no terminal
public:
  void welcome();
  void read_txt(std::string);
  
};
