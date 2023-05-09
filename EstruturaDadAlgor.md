# Estrutura de dados e algoritmos

## -> Análise de Complexidade 

tamanho |

        |
        
        |____________________
        demanda computacional

## Complexidade↑ X Eficiência↓

-> Atividade 1:
1. Para os pares de funções abaixo, determine o menor valor de n (𝑛 ∈ 𝛮) para o qual a segunda função (g(n))
se torna menor do que a primeira (f(n)). Isto é, a partir de que valor inteiro positivo f(n) domina
assintoticamente g(n) nos itens logo a seguir?:

a. 𝑓 𝑛 = 𝑛^2 & , 𝑔 𝑛 = 10𝑛

b. 𝑓 𝑛 = 𝑛. log 𝑛 , 𝑔 𝑛 = 2𝑛

--> Resolução:


Peguei a letra a. pq é mais facil do que com log

n^2 e 10n

fica n^2 = 10n

(n^2)/n = 10

n = 10 // ai usa a lógica de quem é maior ou menor

resultado: n > 10 // pq o n é maior que 10

logo o resultado final é que o menor número inteiro positivo que faça com que o segundo seja menor que o primeiro é o num 11!

2. Escrever as seguintes funções em notação O:

a. 𝑓(𝑛) = 𝑛³ − 1

Resolução da **a**:

com o O pega sempre o maior! porque ele representa o limite superior, ou seja é igual ou maior ao N.

logo o n³ é maior e o restante é insignificante

resultado final: 

O(n³)


b. 𝑓(𝑛) = 𝑛^2 + log𝑛

Resolução da **b**:

O(n^2)


c. 𝑓(𝑛) = 3*(𝑛)^n + 5*(2)^n

Resolução da **c**:

O(n^n)

d. 𝑓(𝑛) = (𝑛 − 1)^n + 5*(2)^n

Resolução da **d**:

O(n^n) 

porque o restante é menor!

e. 𝑓(𝑛) = 345

Resolução da **e**:

O(C)