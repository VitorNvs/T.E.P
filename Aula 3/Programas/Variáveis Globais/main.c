#include <stdio.h>
#include <stdlib.h>

/****************************************
*      Adicionar a saldo bancário       *
*         Vitor Neves - 3BINFO          *
****************************************/

float saldo; //cria a variável global saldo

void adicionarAoSaldo(float x){
    saldo = saldo + x; //Faz a adição na variável
}

int main(){
    printf("Saldo bancario atual: R$");
    scanf("%f",&saldo); //lê um valor para a variável saldo

    float aux = saldo; // Guarda o primeiro valor do saldo

    float x; // o quanto será adicionado ao saldo bancário total
    printf("Quanto sera adicionado? R$");
    scanf("%f",&x); //Lê o quanto será adicionado à variável saldo

    adicionarAoSaldo(x); //Chama a função para alterar o saldo

    printf("Seu saldo bancario era de R$ %0.2f, e apos receber R$ %0.2f passou a ser R$ %0.2f",aux,x,saldo);

}

