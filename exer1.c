#include <stdio.h>
#include <stdlib.h>

FILE *p;
FILE *pcopy;

char r[40];
char w[40];
char rd[40];
char rdd[40];

int word2vec(char *pNomeTxtEntrada){
    pcopy = fopen("text_Vocabulo.txt", "w");
    int i = 0;
    // while (1){

    //     if (r == EOF){
    //         break;
    //         exit(0);
    //     }
    // }

    fclose(w);
   
}

int main(int argc, char const *argv[]){
    p = fopen("text.txt", "r");

    for (int i = 0; r[i] == NULL ; i++){
        r[i] = fgetc(p);
        if (r[i]!= ' '){
            rd[i] = r[i];
        }
        if (r[i] == ' '){
            for (int j = 0; rd[j] < i; j++)
            {
                rd[i]
            }
        }
    
    }
    //word2vec(rd);
    // if(!word2vec(p) || p == NULL){
    //     printf("Erro na geração do vocábulo!");
    // };
    fclose(p);
    return 0;
}
