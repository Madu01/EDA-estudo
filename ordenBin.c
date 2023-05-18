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



//void leArquiv()

int main(int argc, char const *argv[])
{
    FILE *fileP;
    int tam = 0;
    char c[10000];
    int qtdSep = 0;
    // descobri tamanho:
 
    fileP = fopen("Lista_Municípios_com_IBGE_Brasil_Versao_CSV.csv", "r");
    for (int i = 0; c[i] == c[10000] ; i++){
        c[i] = fgetc(fileP);
        if(c[i] == ';'){
            qtdSep++;
            if (qtdSep == 9)
            {
                tam++;
            }
            
        }
    }
 
    fclose(fileP);
    printf("%d\n", tam);


    return 0;
}

