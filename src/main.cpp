/************************************************************************! 
 * o barchart funciona recebendo um arquivo, fazendo sua leitura e dispondo
 * os dados de acordo com o ano.
 *************************************************************************/
#include <iostream>
#include "bars.h"

//o programa deve receber como primeiro parâmetro o nome do arquivo que deseja executar
int main(int argc,char *argv[]) {
  Bars barrateste;
  barrateste.welcome();
  barrateste.read_txt(argv[1]);
}