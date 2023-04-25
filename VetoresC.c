#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *pVetInt;
float *pVetFloat;

int* CriaVetInt(int qdtElemInt){
    pVetInt = (int*) calloc(qdtElemInt, sizeof(int));      
}

float* CriaVetFloat(int qdtElemFloat){
    pVetFloat = (float*) calloc(qdtElemFloat, sizeof(float));
}





char* vetInput(char *pvetcar, int ptammax, int *pqtde, char input){
    if (pqtde != 0){
        int indiceInput = pqtde + 1;
        pvetcar[indiceInput] = input;
    }
    else{
        pvetcar[pqtde] = input;
    }
    
}

char* vetDeletElem(char *pvetcar, int ptammax, int pqtde, char caract1){
    pvetcar = (char*) calloc(ptammax, sizeof(char));
    for (int i = 0; i < pqtde; i++){
        char caract2 = pvetcar[i];
        if(caract1 == caract2){
            pvetcar[i] = pvetcar[pqtde-1];
            ptammax--;
        }
    }  
}

int main(int argc, char const *argv[])
{
    char *vet;
    CriaVetInt(3);

    vetInput(vet, 3, 0, 33);
    vetInput(vet, 3, 1, 22);
    vetInput(vet, 3, 2, 11);

    printf("%s\n", vet);



    //a ideia é assim:
    int *vet;
    int tamTotal = 3;
    int atual = 0;

    CriaVetInt(tamTotal);
    if (vetInput(vet, tamTotal, &atual, 33)){
        
    }
    




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
