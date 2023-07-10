#include <stdio.h>
#include <stdlib.h>


// PILHA: LIFO (Last in, First out)
// ============== PILHA SIMPLESMENTE ENCADEADA ===============


typedef struct TnoPS
{
    int valor;
    struct TnoPS *prox;
} TnoPS;

typedef struct 
{
    TnoPS *topo; // só consegue acessar o valor e prox da outra struct utilizando como tipo o TnoPS
    unsigned int tamanho;
} Pilha_enc;


// Sem cabeça:
int vaziaSemCab(TnoPS *topo){
    if (topo->prox == NULL)
    {
        return 1; // true
    }
    else{
        return 0; // false
    }
    
}

int empilhaSemCab(TnoPS *topo, int num){
    TnoPS *novoNo;
    if (vaziaSemCab(topo) == 1)
    {
        topo->prox = NULL;
        topo->valor = num;
        return 1;
    }
    if (vaziaSemCab(topo) == 0){
        novoNo = (TnoPS*) malloc(sizeof(TnoPS));
        novoNo->valor = num;
        novoNo->prox = topo;
        topo = novoNo;
        return 0;     
    }
    
}
// Com cabeça :
int vaziaComCab(Pilha_enc *pilha){
    if (pilha->tamanho == 0)
    {
        return 1; // true
    }
    else{
        return 0; // false
    }
    
}

int empilhaComCab(Pilha_enc *pilha, int num){
    TnoPS *novoNo;
    if (vaziaComCab(pilha) == 1)
    {
        pilha->topo = (TnoPS*) malloc(sizeof(TnoPS));
        pilha->topo->prox = NULL;
        pilha->topo->valor = num;
        pilha->tamanho++;
        return 1;
    }
    if (vaziaComCab(pilha) == 0){
        novoNo = (TnoPS*) malloc(sizeof(TnoPS));
        novoNo->valor = num;
        novoNo->prox = pilha->topo;
        pilha->topo = novoNo;
        pilha->tamanho++;
        return 0;     
    }
    
}

int main(int argc, char const *argv[])
{
    /** sem cabeça:
    TnoPS *pilha;
    pilha = (TnoPS*) malloc(sizeof(TnoPS)); 
    int returns;
    returns = empilhaSemCab(pilha, 2);
    printf("%d\n%d\n", returns, pilha->valor);
    **/

    // Com cabeça:
    Pilha_enc *pilha;
    pilha = (Pilha_enc*) malloc(sizeof(Pilha_enc));
    pilha->tamanho = 0;
    pilha->topo = NULL;
    int returns;
    returns = empilhaComCab(pilha, 3);
    printf("%d\n%d\n", returns, pilha->topo->valor);

    return 0;    
}



// FILA:  FIFO (First in, First out)
