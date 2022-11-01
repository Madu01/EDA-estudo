# include <stdio.h>
# include <string.h>

int main () {
    char entrada[10000];
    char stringComparar[4] = "sim";
    int resultCompara;
    int resultCompleto = 0;
    int totalTriagem = 0;
    int cont = 0;

    // obs.: ctrl+D para encerrar o loop por causa do EOF  
    while (scanf("%s", entrada) != EOF) {
        resultCompara = strncmp(entrada, stringComparar, 4);
        cont++;

        if (resultCompara == 0) {
            resultCompleto = resultCompleto + 1;
        }

        if (cont == 10) {
            if (resultCompleto >= 2) {
                totalTriagem = totalTriagem + 1;
                resultCompleto = 0;
            }
            cont = 0; 
        }
    }

    printf("%d\n", totalTriagem);

    return 0;
}