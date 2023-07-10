#include <stdio.h>
#include <stdlib.h>


// PILHA: LIFO (Last in, First out)
// ============== PILHA SIMPLESMENTE ENCADEADA ===============
typedef struct
{
    int valor;
    TnoPS *prox;
} TnoPS;

int vazia(TnoPS *pilha){
    if (pilha == NULL)
    {
        return 1; // true
    }
    else{
        return 0; // false
    }
    
}

int empilha(TnoPS *topo, int num){
    TnoPS *novoNo;
    if (vazia(topo) == 1)
    {
        topo = (TnoPS*) malloc(sizeof(TnoPS));
        topo->prox = NULL;
        topo->valor = num;
        return 1;
    }
    else
    {
        novoNo = (TnoPS*) malloc(sizeof(TnoPS));
        novoNo->prox = topo;
        topo = novoNo;
        return 0;     
    }
    
}

int main(int argc, char const *argv[])
{
    TnoPS *pilha;
    int returns;
    returns = empilha(pilha, 2);
    printf("%d", returns);
    return 0;
}



// FILA:  FIFO (First in, First out)