#include <stdio.h>

//Função que escreve uma matriz inteira
int mostrarMatriz(int m[3][3]){
	for(int i = 0; i<3 ; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	//Cria as matrizes A e B
	int A[3][3] = {{1, 2, 3}, {6,3,12}, {4,5,9}};
	int B[3][3] = {{4, 6, 5}, {2,8,21}, {9,32,7}};
	
	mostrarMatriz(A);
	
	printf("-----------------------")
	
	//Percorre as matrizes
	for(int i = 0; i < 3 ; i++){
		for(int j = 0; j < 3; j++){
			//Cria ponteiros para referenciarem os itens atuais das matrizes
			int *pa = &A[i][j];
			int *pb = &B[i][j];
			
			//Coloca o valor do item de B em A
			*pa = *pb;
		}
	}
	
	mostrarMatriz(A);
	
}



