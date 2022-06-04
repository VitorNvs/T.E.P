Strings
É um vetor(lista) de char que é definido da seguinte forma:

char nome_da_string[tamanho];

É importante ressaltar que o último caractere de uma string é sempre preeenchido automaticamente por um \0 (vazio) para indicar o fim do texto.

S T R I N G  B R A B A \0

- Por conta do \0 no final, uma string definida com 10 espaços, ficaria com 9 caracteres livres.

Ler uma string

Para lermos um texto pelo teclado utilizamos a função gets()

char str[10];
gets(str);

Colocando uma variável string dentro do printf

Assim com nos outros tipos, um %s deve ser colocado no meio da string para ser substituido pela variável que está depois do texto.


Condicionais (if e else)

Representa um condição que será verificada pelo programa, se ela for verdadeira um bloco de código será executado, se não, ele não será executado ou outro código será em seu lugar.

int num = 10;
if (num < 15){
	printf("%d é maior que 15", num);
}
else{
	printf("%d não é maior que 15", num);
}

Operadores de comparação:
== igual
!= diferente
> maior
< menor
>= maior ou igual
<= menor ou igual

Operadores lógicos:
.or. um dos dois deve ser verdadeiro para o cógio rodar
.and. os dois devem ser verdadeiros para o código rodar

-note que é necessário utilizar um ponto antes e depois de cada um.

Variáveis Globais

São variáveis criadas fora de qualquer função, e que portanto podem ser utilizadas por todas as funções.

Variáveis locais

São definidas dentro de um função, só podendo ser usada pela função em que ela está contida.