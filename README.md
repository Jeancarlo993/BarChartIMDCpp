# BarChart IMD Cpp
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes  
* Bars   
Essa classe representa o conjunto de dados extraidos de um arquivo
	* estrutura
		* struct One_block -> representa um chart inteiro
			* int number_of_bars -> número de barras no chart
			* string year -> o registrado de cada chart
			* multimap<int,pair<string,string>> -> multimpa ordenado de maneira decrescente com os valores rótulos e categorias de cada chart
			* int min_value -> valor mínimo do chart
			* int max_value -> valor máximo do chart		
	* Atributos 
		* One_block bars_block
		* string archive_name
		* string title
		* string unity_measurement
	* Métodos  
		* construtor 

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
* welcome
	* preparing to read input file
	* processing data, please wait
	* input file successfuly read
	* we have x charts with y bars
	* animation speed 
	* title
	* values is
	* source
	* number of categories
	* press enter to begin the animation
		* inicia a animação
			* cada block (chart) é exibido por vez até o último
