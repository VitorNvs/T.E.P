#include <stdio.h>

/**********************************
*	  Compara��o de Strings	      *
**********************************/

//Fun��o do tamanho da string
int len(char str[100]) {
	int tam = 0;
	while(str[tam] != '\0') {
		tam++;
	}
	return tam;
}

//Fun��o pega duas strings
int str_equal(char str1 [100], char str2 [100]) {
	if(len(str1) != len(str2)){ //verifica se o tamanho das duas � igual
		return 0; //retorna 0 quando as strings s�o diferentes
	}
	else{
		int i = 0; //vari�vel para percorrer os dois textos
		int igual = 1; //vari�vel que diz se as strings s�o iguais ou n�o
		
		while(igual == 1){
			if(str1[i] == str2[i] && str1[i] != '\0'){ //Se os caracteres forem iguais ou diferentes de '\0', i � incremetado
				i++;
			}
			else{ //Caso contr�rio
				if(str1[i] == '\0'){ //Se o caractere atual for '\0', toda as string foi testada, logo elas s�o iguais
					break;
				}
				else{ //Se n�o, eles s�o diferentes, logo as strings s�o diferentes
					igual = 0;
					break;
				}
			}
		}
		if(igual == 1){
		return 1;
		}
		else{
			return 0;
		}
	}
	
	
}

int main() {
	char str1[100];
	gets(str1);
	char str2[100];
	gets(str2);
	
	if(str_equal(str1,str2) == 1) {
		printf("As strings sao iguais.");
	}
	else {
		printf("As strings sao diferentes.");
	}
}
