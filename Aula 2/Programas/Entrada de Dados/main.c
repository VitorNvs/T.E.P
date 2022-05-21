#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,b; // Declaração de variável
    printf("Digite um numero: ");
    scanf("%d",&a); //Entrada de dados do teclado

    printf("Digite outro numero: ");
    scanf("%d",&b);

    char c;
    printf("Digite um caractere: \n");
    c = getch();

    printf("a = %d / b = %d",a,b);

}
