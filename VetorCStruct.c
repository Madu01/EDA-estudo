#include <stdio.h>
#include <stdlib.h>
//Sem struct:
char* CriaVetChar(char *vet, int qdtElemInt){
    vet = (char*) calloc((qdtElemInt), sizeof(char)); 
    return vet;     
}

void vetInput(char *pvetcar, int ptammax, int *pqtde, char input){
    if ((*pqtde) == 0){
        pvetcar[*pqtde] = input;
        (*pqtde)++;
    }
    else{
        pvetcar[*pqtde] = input;
        (*pqtde)++;
    }
}

void vetDeletElem(char *pvetcar, int ptammax, int *pqtde, char caract1){
    for (int i = 0; i < (*pqtde); i++){
        char caract2 = pvetcar[i];
        if(caract1 == caract2){
            pvetcar[i] = pvetcar[(*pqtde-1)];
            (*pqtde)--;
        }
    }  
}

void usaSemStruct(void){
    //a ideia é assim:
    char *pVetChar;
    char *pVetCharDel;
    int tamTotal = 3;
    int atual = 0;
    /* O que entra no parametro é uma cópia independente se a variavel é global, 
    no caso se for usar um número que queira muda-lo dentro do método sempre usa o endereço
    e no método um ponteiro, para que o valor real dele seja mudado de fato */
    pVetChar = CriaVetChar(pVetChar, tamTotal);
    vetInput(pVetChar, tamTotal, &atual, 'o'); //nesse caso a entrada que tem o caracter não precesa ser ponteiro pq não é string
    vetInput(pVetChar, tamTotal, &atual, 'a');
    vetInput(pVetChar, tamTotal, &atual, 'm');
    vetDeletElem(pVetChar, tamTotal, &atual, 'a');
    for (int i = 0; i < atual; i++){
        printf("%c", pVetChar[i]);
    }
    printf("\n");
    vetInput(pVetChar, tamTotal, &atual, 'j');
    vetInput(pVetChar, tamTotal, &atual, 'i');
    for (int i = 0; i < atual; i++){
        printf("%c", pVetChar[i]);
    }
    printf("\n");
}

//Com struct

typedef struct {
    int tamMax;
    int tamAtual;
    char *ctr;
} Tcaract;

//Sempre que tiver ponteiro dentro da struct tem que iniciar ele
void iniciaCtr(Tcaract *p, int tam){
    p->ctr = (char*) malloc(tam*sizeof(char));
}

void vetInputStruct(Tcaract *pvetcar, char str){
    int indice = pvetcar->tamAtual;
    if (pvetcar->tamAtual == 0){
        pvetcar->ctr[indice] = str;
        pvetcar->tamAtual++;
    }
    else{
        pvetcar->ctr[indice] = str;
        pvetcar->tamAtual++;
    }
}

void vetDeletElemStruct(Tcaract *pvetcar, char caract1){
    for (int i = 0; i < pvetcar->tamAtual; i++){
        char caract2 = pvetcar->ctr[i];
        if(caract1 == caract2){
            pvetcar->ctr[i] = pvetcar->ctr[pvetcar->tamAtual-1];
            pvetcar->tamAtual = pvetcar->tamAtual - 1;
        }
    }  
}

int main(int argc, char const *argv[])
{
    //Sem struct:
    //usaSemStruct();
    
    //Com struct:
    Tcaract *c = (Tcaract*) malloc(sizeof(Tcaract));
    iniciaCtr(c, 3);
    vetInputStruct(c,'d');
    vetInputStruct(c,'c');
    vetInputStruct(c,'x');
    for (int i = 0; i < c->tamAtual; i++){
        printf("%c", c->ctr[i]);
    }
    vetDeletElemStruct(c, 'x');
    printf("\n");
    for (int i = 0; i < c->tamAtual; i++){
        printf("%c", c->ctr[i]);
    }
    vetDeletElemStruct(c, 'd');
    printf("\n");
    for (int i = 0; i < c->tamAtual; i++){
        printf("%c", c->ctr[i]);
    }
    printf("\n");
    return 0;
}

