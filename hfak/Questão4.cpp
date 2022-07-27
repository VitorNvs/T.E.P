#include <stdio.h>

int main()
{
	//Cria a matriz	
	float mat[3][3] ={{1.1, 2.2, 3.3},{6.7,3.6,12.9},{4,5,9.8}}; 
	
	//Cria uma matriz de ponteiros
	float *pmat[3][3];
	
	//Percorre todos os itens da matriz
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			//Dentro da matriz de ponteiros, faz referencia ao item atual na matriz
			pmat[i][j] = &mat[i][j];
			//Escreve o endereço de cada item
			printf("%p ", pmat[i][j]);
		}
		printf("\n");
	}
}
