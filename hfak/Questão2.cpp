#include <stdio.h>


int main()
{
	//Cria os chars
	char c2 = 'b';
	char c1 = 'g';
	
	printf("Maior endereco:");
	
	//Verifica se c1 tem um ender�o maior que c2
	if (&c1 > &c2){
		printf("%p / valor: %c",&c1, c1); //escreve o endere�o e o valor de c1 no terminal
	} 
	//Se o enderen�o de c1 n�o for maior que o de c2  
	else{
		printf("%p / valor: %c",&c2, c2); //escreve o endere�o e o valor de c2 no terminal
	}  
}
