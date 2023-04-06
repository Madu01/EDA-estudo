#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *p;
    FILE *pCopy;
    char c;
    char w;
    p = fopen("test.txt", "r");
    pCopy = fopen("testCopy.txt", "w");
    if(p == NULL){
        printf("erro, está vazio!");
        exit(0);
    }
    while(1)
    {
        c = fgetc(p);
        if (c == EOF)
        {
            break;
        }   
        w = fputc(c, pCopy);
        printf("%c", w);
    }
    printf("\n");
    fclose(p);
    
    return 0;
}