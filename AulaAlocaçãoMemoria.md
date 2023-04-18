# Em C

## malloc

### Estrutura
|void*|malloc|(size_t qtde)|
|--|--|--|
|o malloc retorna um ponteiro genérico que não tem tipo, por isso usa o void||quantidades de bytes a serem alocados, ultimalmente se utiliza o sizeof(tipo)|
```cpp
tipo do dado *nome = (tipo do dado *) malloc(sizeof(tipo do dado) * tamanho);
```
### Exemplo de uso

```cpp
int *v

v = (int *) malloc(10*sizeof(int)); 

v[0] = 3;

printf("%d", v[0]);

```
#### Explicação 

|v = | (int *)| malloc(10*sizeof(int)); | 
|--|--|--|
||se chama cast, transforma o retorno do malloc para um ponteiro de inteiro, pois se não tiver isso ele retorna um genérico||

## calloc

### Estrutura

|void* |calloc| (size_t qtde,| size_t tam)|
|--|--|--|--|
|o calloc retorna um ponteiro genérico que não tem tipo, por isso usa o void||quantidade de elementos|tamanho dos elementos, geralmente se utiliza o sizeof(tipo)|

```cpp
tipo do dado * nome = (tipo do dado *) calloc (tamanho, sizeof(tipo do dado));
```

### Exemplo de uso

```cpp
int *v

v = (int *) calloc(10, sizeof(int)); 

v[0] = 3;

printf("%d", v[0]);

```

#### Explicação

--> Quando o calloc faz a alocação na memória, ele apaga o que estava antes no local alocado.

|v = | (int *) |calloc|(10,| sizeof(int))|
|--|--|--|--|--|
||retorno em ponteiro do tipo inteiro||quantidade de elementos|o tamanho do tipo do dado|

## free

### Estrutura

|void| free|(void* ptr)|
|--|--|--|
|||ponteiro para a área de memória a ser desalocada|

## Biblioteca 
--> Biblioteca utilizada para o malloc, calloc e free:

```cpp
#include <stdlib.h>
```

## Exemplo de uso

```cpp
#include <stdlib.h> 

int main ()
{

int *Vet1, *Vet2; //Declaração dos ponteiros
Vet1 = (int*) malloc (100*sizeof(int)); //Alocação de memória
Vet2 = (int*) calloc (100, sizeof(int)); //Alocação de memória
free (Vet1); //Desalocação de memória
free (Vet2); //Desalocação de memória
return 0;
}
```























