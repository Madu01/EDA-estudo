#include <stdio.h>

// --> RECURSIVIDADE <--

// Exercicio 1
// uma função recursiva que calcule a soma dos dígitos de um número inteiro.
// int sum = 0;
// int somaDigitosInt(char numC,int *numI){
//     if (numI < 0)return sum;
//     int valor = atoi(numC[(*numI)]);
//     sum = sum + numC[(*numI)];
    
//     *numI--;
// }

// Exercicio 2
// uma função recursiva que calcule o produto de dois números inteiros positivos a e b, usando apenas somas e subtrações.
int prodSumExe2 = 0;
int prod(int A, int B, int stop){
    if(stop == 0)return prodSumExe2;
    if (B == 0)return 0;
    if(B == 1)return A;
    stop--;
    prodSumExe2 = A + prod(A, B, stop);
}

// Exercicio 3
// uma função recursiva que calcule o valor de x elevado à potência n, onde x e n são números inteiros positivos.
int prodSumExe3 = 0;
int potencia(int A, int B, int stop){
    if(A == 0)return 0;
    if(B == 0)return 1;
    if(B == 1)return A;
    int inicioStop = stop;
    if(inicioStop == stop){prodSumExe3 = A;}
    if(stop == 1)return prodSumExe3;
    stop--;
    prodSumExe3 = A * potencia(A, B, stop);
}

// Exercicio 4
// uma função recursiva que determine se uma string é um palíndromo (ou seja, se pode ser lida igualmente de trás para frente).
int i = 0;
void palindromo(char *p, char *pcopy){
    if(p[i] == '\0') {
        printf("%s", p);
    }
    i++;
    palindromo(p+1);
}


int main(int argc, char const *argv[])
{
    // Exercicio 1
    // int numInt = 55;
    // int numQtdDigitos = 2;
    // char numChar[30];
    // sprintf(numChar, "%d", numInt);
    // int result = somaDigitosInt(numChar, &numQtdDigitos);

    //------------------------------------------------------

    // Exercicio 2
    // int result = prod(15,3,3);
    // prodSumExe2 = 0;
    // int result1 = prod(10,3,3);
    // printf("%d\n%d\n", result, result1);

    //------------------------------------------------------

    // Exercicio 3
    // int result = potencia(13, 3, 3);
    // prodSumExe3 = 0;
    // int result1 = potencia(7,8,8);
    // printf("%d\n%d\n", result, result1);

    //------------------------------------------------------

    // Exercicio 4
    char *pString = "oie";
    char *d;
    palindromo(pString);
    //printf("%s", d);

    
    return 0;
}
