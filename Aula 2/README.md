
# Introdução ao C:
Em nosso curso a linguagem que será utilizada para programar o firmware (programa usado para controlar os sistemas embarcados) dos microcontroladores é o C!

A linguagem C possui diversas características, listadas abaixo:

- ***Linguagem Estruturada:*** O pragrama consiste em rodar um arquivo único e seu algoritmo se baseia na chamada de funções.
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
```c
int a = 2;
```
- Caso as variáveis sejam do mesmo tipo é possível declará-las na mesma linha.
```c
int a,b;
```

## Entrada de dados(Scanf):
- Recebe valores numéricos.
- Use printf para imprimir uma mensagem de pergunta para o usuário.
```c
#include <stdio.h>

int main(){
 int a;
 printf("Digite um número: ");
}
```
- Usar scanf. 
   1. Parâmetro --> "%d": O caractere após o % representa o tipo da variável que será lida. 
   2. Parâmetro --> &a: O nome da variável que receberá o dado lido.
```c
#include <stdio.h>

int main(){
 int a;
 printf("Digite um número: ");
 scanf("%d",&a);
}
```
> Quando for ler uma variável é preciso usar ***&*** antes de seu nome.

## Entrada de Dados(getch):
- Recebe caracteres(char).
- Importar a biblioteca conio.h.
```c
#include <conio.h>

int main(){
 
}
```
- Criar uma variável do tipo char.
```c
#include <conio.h>

int main(){
 char c;
}
```
- Fazer a variável receber a função getch();
```c
#include <conio.h>

int main(){
 char c;
 printf("Pressione uma tecla: ");
 c = getch();
}
```

## Mostrar uma variável dentro do print:
- Dentro do texto colocar "%x" no meio, sendo que x é o tipo da variável.
```c
printf("a = %d / b = %d");
```
- Após as aspas, colocar as variáveis que serão escritas no terminal. É preciso colocá-las na ordem em que aparecerão.
```c
int a = 5;
int b = 6;
printf("a = %d / b = %d",a,b);
```
> Dessa vez não é necessário colocar o &.
### *Saída*
```
a = 5 / b = 6
```

## Operadores Aritméticos:
```c
int a = 10;
int b = 5;
```
- Adição (+) 
```c
c = b + a
printf("%d\n",c)
```
- Subtração (-)
```c
c = b - a
printf("%d\n",c)
```
- Multiplicação (*)
```c
c = b * a
printf("%d\n",c)
```
- Divisão (/)
```c
c = b / a
printf("%d\n",c)
```
### *Saída*
```
15
5
50
2
```

## Criando Funções:
- Definir o tipo da saída (int, float, void,...)
- Nome da Função
- Abrir parenteses para os parâmetros
- Abrir chaves
```c
int funcaoInt(p1,p2){
 // Função que retorna um INTEIRO
}
float funcaoFloat(p1,p2){
 // Função que retorna um FLOAT
}
void funcaoVoid(p1,p2){
 // Função que não retorna um valor
}
```
- Após a criação da função, basta chamá-la em outra parte do código para usá-la.

```c
#include <stdio.h>

void dizerBomDia(){
 printf("Bom dia!\n");
}

int main(){
 dizerBomDia();
}
```
### *Saída*
```
Bom dia!
```
> Caso eu crie uma variável dentro de uma função, ela será uma variável local, ou seja, não será possível usá-la em outra função.

### Alunos depois da aula
<img align="right" height=100px src="https://c.tenor.com/ZhPtZ4-pRH4AAAAd/kikis-delivery-service-kiki.gif">
