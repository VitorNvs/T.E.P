#include <stdio.h>

int main()
{
	//Cria os inteiros
	int a = 5;
	int b = 9;
	
	//Cria os ponteiros apontando para eles
	int *pa = &a;
	int *pb = &b;
	
	//Escreve os valores iniciais apontados pelos pa e pb
	printf("A = %d / B = %d\n", *pa, *pb);
	
	int aux = *pa;//Cria uma variável auxiliar que recebe o valor de a
	*pa = *pb; //a recebe o valor de b
	*pb = aux; //b recebe o valro de a
	
	//Escreve os valores apontados pelos pa e pb depois da troca
	printf("A = %d / B = %d", *pa, *pb);
	
}
