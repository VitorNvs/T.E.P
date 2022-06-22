#include <stdio.h>
#include <stdlib.h>

/************************************************
*   Saber quantas palavras uma frase possui     *
*            Vitor Neves - 3BINFO               *
************************************************/

//Recebe uma frase
int qtdPalavras(char frase[]){

    int space = 0; //contador de espaços
    int i = 0;

    //conta quantos espaços têm na frase
    while(frase[i] != '\0'){ //Primeiro testa a condição, depois roda o código
        if(frase[i] == ' '){
            space++;
        }
        i++;
    }
    
    if(i == 0){
        return 0;
    }
    
    return space+1; //Retorna a quantidade de palavras, que são os espaço mais 1
}

int main()
{

    char frase[250];
    printf("Escreva uma frase \n");
    gets(frase); //lê uma frase de até 250 caracteres

    int palavrasFrase = qtdPalavras(frase); //coloca o resultado da função de contagem em uma variável inteira

    printf("A frase escrita acima possui %d palavras no total.", palavrasFrase);

}
