# BarChart IMD Cpp
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes  
* Bars   
Essa classe representa um dado que pode ter várias faces.
Basseado na quantidade de faces, retorna um número aleatório
de 1 até o numero de faces  
	* Atributos 
		* faces -> o numero sorteado por um dado será de 1 até faces  
	* Métodos  
		* Construtor -> por padrão inicia um dado com 6 faces  

* Barschart 
 Essa classe representa um jogador que pode ser máquina ou humano.
 O jogador também o seu log de jogadas, informando o que houve em cada
 rodada. Além disso, o jogador também tem seus pontos conquistados no
 round e no jogo como um todo.  
	* Atributos 
		* name -> nome de um jogador  
	* Métodos  
		* Construtor -> por padrão constroi um player chamado corleone que é máquina e tem um dado de 6 faces  


## O programa
* Mostra o manual
	* iniciar
		* escolher o nome
		* sortear quem começa
			* se human começa
				* oferece as opções
					* se r, então rola faz uma jogada
						* caso valor jogado mais o valor o total até então passe os 100 então game_over() 
							* mostra o log final do jogo e indica o vencedor  
					* se h, passa o turno
					* se q, sai do jogo
					* se m, mostra o manual
					* se l, mostra o log 		 
			* se machine começa
				* faz 5 jogadas
				* caso 1 em alguma delas, passa o turno
				* caso valor jogado mais o valor o total até então passe os 100 então game_over() 
					* mostra o log final do jogo e indica o vencedor 
				* depois das 5 jogadas passa o turno	
