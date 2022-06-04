# Strings
É um vetor(lista) de char que é definido da seguinte forma:

```
char nome_da_string[tamanho];
```
É importante ressaltar que o último caractere de uma string é sempre preeenchido automaticamente por um <b>\0</b> (vazio) para indicar o fim do texto.

- Abaixo vemos uma string com 13 espaços sendo usados:

| S | T | R | I | N | G |   | B | R | A | B | A | \0 |
| - | - | - | - | - | - | - | - | - | - | - | - | - |


> Por conta do \0 no final, uma string definida com 10 espaços, ficaria com 9 caracteres livres.

## Ler uma string

Para lermos um texto pelo teclado utilizamos a função gets()

```c
char str[10];
gets(str);
```
## Colocando uma variável string dentro do printf

Assim com nos outros tipos, um <strong>%s</strong> deve ser colocado no meio da string para ser substituido pela variável que está depois do texto.

```c
char turma[10] = "3BINFO";
printf("%s eh a melhor turma do CEFET", turma);
```
#### Saída
```
3BINFO eh a melhor turma do CEFET
```
> <i>OBS.:</i> string[x] é um char, não string, pois se está pegando um dos elementos do vetor string, que é um char.

# Condicionais (if e else)

Representa um condição que será verificada pelo programa, se ela for verdadeira um bloco de código será executado, se não, ele não será executado ou outro código será em seu lugar.

```c
int num = 10;
if (num < 15){
	printf("%d é maior que 15", num);
}
else{
	printf("%d não é maior que 15", num);
}
```

## Operadores de comparação:
- == igual
- != diferente
- < menor ,> maior
- <= menor ou igual ,>= maior ou igual

## Operadores lógicos:

- .or. , ||: 
	> Um dos dois deve ser verdadeiro para o cógio rodar
- .and. , &&: 
	> Os dois devem ser verdadeiros para o código rodar

Note que é necessário utilizar um ponto antes e depois ao usar <b>or</b> e <b>and</b>.

# Variáveis Globais

São variáveis criadas fora de qualquer função, e que portanto podem ser utilizadas por todas as funções.
```c
int num = 0;
int main(){
	num = 5;
	funcao2();
}
void funcao2(){
	num = num*2;
}
```

# Variáveis locais

São definidas dentro de um função, só podendo ser usada pela função em que ela está contida.
```c
int main(){
	int num = 0;
	num = 5;
}
void funcao2(){
	char a = 'c';
}
```
> Apenas <i>main()</i> pode usar <b>num</b> e apenas <i>funcao2()</i> pode usar <b>a</b>.

### Alunos depois da aula😴
<img align="left" height=200px src="https://c.tenor.com/ZhPtZ4-pRH4AAAAd/kikis-delivery-service-kiki.gif">
