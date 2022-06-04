/************************************************************************! 
 * o barchart funciona recebendo um arquivo, fazendo sua leitura e dispondo
 * os dados de acordo com o ano.
 *************************************************************************/
#include <iostream>
#include "barchart.h"

//o programa deve receber como primeiro parâmetro o nome do arquivo que deseja executar
int main(int argc,char *argv[]) {
  Barchart mainbars;
  mainbars.welcome();
  mainbars.data.read_txt(argv[1]);
  mainbars.init();
}
