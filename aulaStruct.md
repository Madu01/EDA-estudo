# Struct

## Descrição 

É uma estrutura de dados composta que define
fisicamente uma lista de variáveis agrupadas
sob um nome em um bloco de memória.

## Estrutura

```c
struct [tag da estrutura] {
    tipo_da_variavel nome_da_variavel;
    tipo_da_variavel nome_da_variavel;
    tipo_da_variavel nome_da_variavel;
} [uma ou mais variáveis da estrutura];
```

### Exemplo

**--> Com mais de uma variável:**
```c
struct Cliente{
    int codg;
    char nome[30];
    float altura;
    int cpf;
} cli1, cli2;
```

**--> Com uma variável:**

```c
struct Cliente{
    int codg;
    char nome [30];
    float altura;
    int cpf;
} cli1; // variavel
```

**Obs.:** Nesses casos utilizou variáveis(que são estáticas, não ponteiros) definidas e por ter variáveis, já alocou memória pra elas.

**--> Sem variável:**

```c
struct Cliente{
    int codg;
    char nome[30];
    float altura;
    int cpf;
};

struct Livros Livro1, Livro2; // Declarando Livro1 e Livro2 do tipo Livros
```
**Obs.:** Mas pra este caso não utilizou variáveis definidas e por não ter variáveis, não alocou memória, observe que só foi definida/definida após a struct.

# typedef

## Descrição

é usado para renomear um tipo de dado.

## Estrutura

```c
    typedef struct
    {
        char nome[100];
        int idade;
    } Tpessoa;
```
```c
int main(int argc, char const *argv[]){
    typedef struct{
        char nome[100];
        int idade;
    } Tpessoa; // usa T maiusculo porque é um tipo e também uma boa prática
    // alocando uma estrutura
    Tpessoa *p = (Tpessoa*) malloc(sizeof(Tpessoa));
    if (p){
        p->idade = 3;
        printf("nome: %s\nidade: %d\n", p->nome, p->idade);
        free(p);
    }

    return 0;
}
```