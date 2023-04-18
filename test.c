#include <stdio.h>
#include <stdlib.h>

FILE *p;
FILE *pCopy;

char r[40];
char w[40];
char rd[40][100]; //coluna e linha
char rdd[40];
char *word;
char **word1;

int word2vec(char *pNomeTxtEntrada){
    pCopy = fopen("text_Vocabulo.txt", "w");
    int i = 0;
    // while (1){

    //     if (r == EOF){
    //         break;
    //         exit(0);
    //     }
    // }

    //fclose(w);
   
}


int main(int argc, char const *argv[]){
    p = fopen("text.txt", "r");
    int i = 0;
    while(1){
        r[i] = fgetc(p);

        if (r[i] == EOF){
            break;
        }
        
        i++;
    }

    for (int l = 0; l < i; l++)
    {
    
        if (r[l] == ' ')
        {
            for (int j = 0; j < i; j++)
            {
                rd[j][i] = r[j];
            }
        }
    }
    for (int l = 0; l < i; l++)
    {
        printf("%s \n",  rd);
    }
    
    
    
    
        
        
    
    // }
    //word2vec(rd);
    // if(!word2vec(p) || p == NULL){
    //     printf("Erro na geração do vocábulo!");
    // };
    fclose(p);
    return 0;
}
