#include <stdio.h>

/**********************************
*	  Comprimento de Strings	  *
**********************************/

//descobre o tamanho da string
int len(char str[100]) {
	int tam = 0;//vari�vel que conta a quantidade de caracteres da string
	
	while(str[tam] != '\0') {
		tam++;//A cada caractere que n�o for igual a '\0', a vari�vel tam ser� incrementada
	}
	
	return tam;//Ao chegar ao final o tamanho � retornado pela fun��o
}

int main() {
	char str[100];//cria uma string
	gets(str);//l� o texto
	
	printf("O comprimento de %s e %d.",str,len(str));
}

