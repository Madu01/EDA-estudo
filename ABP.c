#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numAgeTum;
    Tabp *left;
    Tabp *right;
} Tabp;


void cad(void);

void menu(void){
    int input;

    printf("\n============ MENU ============\n");
    printf("[1] Carregar Arquivo de Dados\n");
    printf("[2] Emitir Relatório\n");
    printf("[3] sair\n");
    printf("Digite sua escolha: ");
    
    scanf("%d", &input);

    switch (input)
    {
        case 1:
            cad();
            break;

        case 2:
            
            break;

        case 3:
            exit(0);
            break;
        
        default:
            printf("Tente novamente, insira um número! . . .");
            break;
    }
};

void noABP(void){
    Tabp *a = (Tabp*) malloc(sizeof(Tabp));
}

instalABP(Tabp *num, int inputInt){
    if(num != NULL){
        if (inputInt < num->numAgeTum){
            instalABP(num->left, inputInt);
        }

        else{
            instalABP(num->right, inputInt);
        }
    }

    else{
        num = noABP;
        num->numAgeTum = inputInt;
        num->left = NULL;
        num->right = NULL;
    }
}

void loadFolder(FILE *p, char *name){
    int in;
    p = fopen(name, "r");
    int *pInt;
    while (1){
        in = fgetc(p); 
        if (in == EOF){
            printf("\n");
            break;
        }
        instalABP(pInt,in);        
        printf("%d", in);
    }
    fclose(p);
}

void cad(void){
    char *inputName;
    int inputOp;
    inputName = (char*) malloc(sizeof(char)*20);

    printf("\n============ Arquivo de Dados ============\n");
    printf("[1] Inserir o nome do arquivo \n");
    printf("[2] voltar\n");
    scanf("%d", &inputOp);
    switch (inputOp)
    {
        case 1:
            printf("Digite o nome: \n");
            scanf("%s", inputName);

            FILE *fileP;
            loadFolder(fileP, inputName);
            break;

        case 2:
            menu();
            break;
        
        default:
            printf("Tente novamente, insira um número! . . .");
            break;
    }
};

int main(int argc, char const *argv[])
{
    menu();

    return 0;
}
