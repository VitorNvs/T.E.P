#include <stdio.h>
#include <stdlib.h>

/****************************************
*      Adicionar a saldo banc�rio       *
*         Vitor Neves - 3BINFO          *
****************************************/

float saldo; //cria a vari�vel global saldo

void adicionarAoSaldo(float x){
    saldo = saldo + x; //Faz a adi��o na vari�vel
}

int main(){
    printf("Saldo bancario atual: R$");
    scanf("%f",&saldo); //l� um valor para a vari�vel saldo

    float aux = saldo; // Guarda o primeiro valor do saldo

    float x; // o quanto ser� adicionado ao saldo banc�rio total
    printf("Quanto sera adicionado? R$");
    scanf("%f",&x); //L� o quanto ser� adicionado � vari�vel saldo

    adicionarAoSaldo(x); //Chama a fun��o para alterar o saldo

    printf("Seu saldo bancario era de R$ %0.2f, e apos receber R$ %0.2f passou a ser R$ %0.2f",aux,x,saldo);

}

