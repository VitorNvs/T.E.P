#include <stdio.h>
#include <stdlib.h>
/************************************************
*           Programa de Ajuste Salarial         *
*              Vitor Neves - 3BINFO             *
************************************************/

// Objetivo: Ler um salario e uma porcentagem para realizar o seu aumento.

float ajusteSal(float salario, float porcent){
    return salario*(1.0+(porcent/100));//Aumenta o sal�rio com base em uma porcentagem
}

int main()
{
    char nome_func[21];// Cria uma String com 21 espa�os, sendo que o �ltimo � preenchido obrigatoriamente por um \0.
    printf("Nome do funcionario: ");
    gets(nome_func);//L� a String do nome do funcion�rio

    float salario_atual,salario_novo;
    printf("Salario atual de %s: ",nome_func);
    scanf("%f",&salario_atual);//L� o sal�rio atual do funcionario

    float porcent = 0;
    printf("Porcentagem de aumento: ");
    scanf("%f", &porcent);//L� a porcenteagem de aumento do sal�rio

    salario_novo = ajusteSal(salario_atual, porcent);//Aplica a fun��o para aumentar o sal�rio

    //O 0.2 entre o % e o f limita quantas casa decimais do n�mero aparecer�o no terminal
    printf("O funcionario %s possuia o salario de R$ %0.2f.\n",nome_func,salario_atual);
    printf("Apos o ajuste de %0.0f%%, %s recebera %0.2f por mes.\n",porcent,nome_func,salario_novo);

}
