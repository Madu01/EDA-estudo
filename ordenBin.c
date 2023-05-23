/*
1) criar alocação de memória com ponteiro, e descobrir o tamanho do arquivo.
2) colocar as chaves no ponteiro
3) o usuário vai inserir o código 
4) buscar o código, com busca binária e sequencial utilizando dois clock para obter o tempo em q 
leva pra buscar em cada método de busca
5)cria um método que com o código existente buscado, pegue os dados da linha do código,(utiliza 
struct para armazenar os dados da linha)
6) printar a struct 
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int countLine(FILE *p){
    int tam = 0;
    char c;

    p = fopen("Lista_Municípios_com_IBGE_Brasil_Versao_CSV.csv", "r");
    while (1){
        c = fgetc(p);
        if (c == '\n'){
            tam++;
        }
        if (c == EOF){
            break;
        }
    }
    return tam;
    fclose(p);
}

void putKeys(FILE *p, int *pk){
    char c;
    int count = 0;
    p = fopen("Lista_Municípios_com_IBGE_Brasil_Versao_CSV.csv", "r");

    while (1){
        c = fgetc(p);
    
        if (count == 1){
            if (c != 'I'){
                *pk = c;
                pk+1;
                count = 0;
            }
            count = 0;
        }
        if (c == ';'){
            count++;
        }
        
        if (c == EOF){
            break;
        }
    }
    fclose(p);
}

int main(int argc, char const *argv[])
{
    FILE *fileP;
    int *pKey;
    int lenLines = 0;
    // descobri tamanho:
    lenLines = countLine(fileP);
    //printf("%d\n", qtdLines);

    pKey = (int*) malloc(sizeof(int)*lenLines);
    putKeys(fileP, pKey);
    for (int i = 0; i < lenLines; i++){
        printf("%d\n", *pKey);
        pKey++;
    }
    
    

    return 0;
}
