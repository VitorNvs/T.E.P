#include <stdio.h>
#include <stdbool.h>
#define formatBool(b) ((b) ? "true" : "false")

int main()
{
	//Inicializa as variáveis
    int num = 10;
    float num2 = 5.5;
    char c = 'a';
    bool b = true;
    
    //Cria ponteiros e os referencia aos endereços das variáveis criadas a cima
    int *pn = &num;
    float *pn2 = &num2;
    char *pc = &c;
    bool *pb = &b;
    
    printf("Valores Antigos\n");
    
    //Coloca os valores em uma string
    printf("Int: %d / Float: %f / Char: %c / Bool: %s\n",num,num2,c,formatBool(b)); //formatBool() transforma o valor de um bool em uma string
     
    printf("----------------------------\n");
    
    printf("Valores Novos\n");
    
    //Muda os valores das variáveis a partir do ponteiro
    //Colocando o * na frente, a mudança estará sendo feita no valor apontado pelo ponteiro
    *pn = 24;
    *pn2 = 4.8;
    *pc = 'f';
    *pb = false;
    
    //Escreve os novos valores
    printf("Int: %d / Float: %f / Char: %c / Bool: %s\n",num,num2,c,formatBool(b));
    
}
