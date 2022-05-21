
# Introdução ao C:
Em nosso curso a linguagem que será utilizada para programar o firmware (programa usado para controlar os sistemas embarcados) dos microcontroladores é o C!

A linguagem C possui diversas características, listadas abaixo:

- ***Linguagem Estruturada***
- ***Linguagem Tipada:*** Em C é necessário expor os tipos das variáveis ao declará-las. (Char, Int, Float,...).
- ***Case Sensitive:*** Diferencia maiúsculas e minúsculas. 
```
int a != int A
```
- ***Linguagem Compilada:*** Antes de rodar o programa é preciso compilar o código, ou seja, traduzir ele por inteiro para a linguagem que o computador irá entender.


## Primeiros passos:
Em arquivo C alguns comandos precisam estar obrigatóriamente escritos para que o programa rode.
- Importar a biblioteca stdio.h
```c
#include <stdio.h> 
//A biblioteca stdio.h possui funções de entrada e saída de dados
```
> Bibliotecas são conjuntos de funções pré-definidas
- Criar uma função main()
```c
#include <stdio.h>

int main(){
 //É dentro dessa função que o nosso código será escrito
}
```
-  Primeiro comando
```c
#include <stdio.h>

int main(){
 printf("Java é feio!");
}
```
> Nunca esqueça o ";" no final das linhas de comando!

## Declaração de Variáveis:
- Informar o tipo. *Ex: int, float, char,...*
- Dar um nome. *Ex: num, a, valor1*
```c
int num;
char c;
float valor;
```
- Inicializá-la com um valor(Opcional)
- Caso as variáveis sejam do mesmo tipo é possível declará-las na mesma linha.

## Entrada de dados(Scanf):
- Use printf para imprimir uma mensagem de pergunta para o usuário.
- Usar scanf. (Primeiro parâmetro --> "%d" sendo que o caractere após o % é o tipo da variável que será lida. / Segundo parâmetro --> &a, a variável que receberá o dado lido)
- Quando for ler uma variável é preciso usar & antes de seu nome.

## Entrada de Dados(getch):
- Importar a biblioteca conio.h
- Criar uma variável do tipo char
- Fazer a variável receber a função getch();

## Mostrar uma variável dentro do print:
- Dentro do texto colocar "%x" no meio, sendo que x é o tipo da variável.
- Após as aspas, colocar as variáveis que serão escritas no terminal. É preciso colocá-las na ordem em que aparecerão.
-Dessa vez não é necessário colocar o &.

## Operadores Aritméticos:
- Adição (+)
- Subtração (-)
- Multiplicação (*)
- Divisão (/)

## Criando Funções:
- Definir o tipo da saída (int, float, void,...)
- Nome da Função
- Abrir parenteses para os parâmetros(Opcional)
- Abrir chaves(Onde o código da função será escrito)
- Após a criação da função, basta chamá-la em outra parte do código para usá-la.

```
OBS: Escopo de variável:
- Caso eu crie uma variável dentro de uma função, ela será uma variável local, ou seja, não será possível usá-la em outra função.
```
