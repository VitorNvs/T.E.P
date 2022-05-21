#include <stdio.h>
#include <stdlib.h>

//Void não retorna nenhum tipo
void dizerBomDia(){
    printf("Bom Dia!\n");
}

//Obrigatoriamente vai retornar um valor inteiro
int soma(int a, int b){
    int s = a+b;
    return s;
}
int main()
{
    dizerBomDia();
    printf("%d",soma(4,7));
}
