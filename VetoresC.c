#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *pVetInt;
float *pVetFloat;
char *pVetChar;

int* CriaVetInt(int qdtElemInt){
    pVetInt = (int*) calloc(qdtElemInt, sizeof(int));      
}

float* CriaVetFloat(int qdtElemFloat){
    pVetFloat = (float*) calloc(qdtElemFloat, sizeof(float));
}

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

int main(int argc, char const *argv[])
{
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
    
    
    


    // CriaVetInt(4);
    // CriaVetFloat(3);


    // int qtdInt = 0;
    // float qtdFloat;

    // printf("insira 4 números inteiros:");
    // for (int i = 0; i < 3; i++){
    //     scanf("%d", &qtdInt);
    //     pVetInt[i] = qtdInt;
    // } 

    // printf("insira 3 números quebrados:");
    // for (int i = 0; i < 2; i++){
    //     scanf("%f", &qtdFloat);
    //     pVetFloat[i] = qtdFloat;
    // }

    // for (int i = 0; i < 3; i++){
    //     printf("%d\n", pVetInt[i]);
    // }

    // for (int i = 0; i < 2; i++){
    //     printf("%f\n", pVetFloat[i]);
    // }
    

    return 0;
}
