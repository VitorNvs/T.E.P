#include <stdio.h>

/**********************************
*	  Comprimento de Strings	  *
**********************************/

//descobre o tamanho da string
int len(char str[100]) {
	int tam = 0;//variável que conta a quantidade de caracteres da string
	
	while(str[tam] != '\0') {
		tam++;//A cada caractere que não for igual a '\0', a variável tam será incrementada
	}
	
	return tam;//Ao chegar ao final o tamanho é retornado pela função
}

int main() {
	char str[100];//cria uma string
	gets(str);//lê o texto
	
	printf("O comprimento de %s e %d.",str,len(str));
}

