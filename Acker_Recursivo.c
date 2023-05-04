#include <stdio.h>
/**
 * @brief 
 * é a função Ackermann, porém criada com recursividade
 * @param m entrada de número inteiro positivo
 * @param n entrada de número inteiro positivo
 * @return retorna um número inteiro positivo do resultado do cálculo 
 */
int AckermannRecursivo(int m, int n){
    if(m == 0)return (n+1);
    if(m > 0 && n == 0)return AckermannRecursivo(m - 1, 1);
    if(m > 0 && n > 0)return AckermannRecursivo(m - 1, AckermannRecursivo(m, n - 1));

}

int main(int argc, char const *argv[])
{
    int inputM = 0;
    int inputN = 0;
    scanf("%d %d", &inputM, &inputN);
    if (inputM < 0 || inputN < 0){
        printf("Entradas incorretas, digite números positivos!\n");
    }
    else{
        int result = AckermannRecursivo(inputM, inputN);
        printf("O valor da função de Ackermann para m=%d e n=%d é %d\n", inputM, inputN, result);
    }
    return 0;
}

