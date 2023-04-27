#include <stdio.h>
#include <stdlib.h>

long int sum = 0;
long int somavet(int *a, int qtde){
    if(qtde < 0)return sum;

    int indice = qtde;
    if(qtde != 0){
        indice--;
    }
    sum = a[qtde] + a[indice];
    qtde = qtde - 2;
    somavet(a,qtde);
}
int i = 0;
int result = 1;
int comparaString(char *a, char *b){
    //0 nao igual e 1 é igual
    if(a[i] == '\0')return result;
    if(a == NULL && b == NULL)return 1;
    if (a[i] != b[i]){
        result = 0;
    }
    i++;
    comparaString(a,b);
}

int sumFib = 0;
int fibonacci(int num){
    if(num == 0) return 0;
    if(num == 1) return 1;
    return sumFib = (fibonacci(num-1)) + (fibonacci(num-2));
}

int main(int argc, char const *argv[])
{
    // int v[3] = {5,3,2};
    // long int result = somavet(v, 2);
    // printf("%ld\n", result);


    // char *a;
    // char *b;
    // a = (char*) malloc(10*sizeof(char));
    // b = (char*) malloc(10*sizeof(char));
    // a = "amo";
    // b = "amo";
    // int result1 = comparaString(a,b);
    // printf("%d\n", result1);

    // int result2 = fibonacci(9);
    // printf("%d\n", result2);

    return 0;
}
