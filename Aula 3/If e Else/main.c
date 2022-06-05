#include <stdio.h>
#include <math.h>

/************************************
*    Descobrir Quadrado Perfeito    *
*       Vitor Neves - 3BINFO        *
************************************/

int main(){
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d",&num); //Scaneia um valor;

    double raiz;
    raiz = sqrt(num); //Faz a sua raiz quadrada;
    int aux = raiz; //Guarda o resultado da raiz em uma variável int, assim perdendo sua parte não inteira.

    //Se tanto o int quanto o float forem iguais, então a raiz era inteira e o número digitado um quadrado perfeito
    if(aux == raiz){
        printf("O valor %d eh um quadrado perfeito cuja raiz eh %d",num,aux);
    }
    //Se forem diferentes, a raiz não era inteira, portanto o numero não é um quadrado perfeito
    else{
        printf("O valor %d nao eh um quadrado perfeito.",num);
    }
}
