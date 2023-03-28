#include <stdio.h>
#include <stdlib.h>

//Essa estrutura armazena o valor e o próximo da fila
struct no{
    int valor;
    struct no *prox;
};

//Definimos um TIPO e chamamos de Elemento
typedef struct no Elemento;

//A estrutura fila irá manter dois ponteiros, um para o inicio e outro para o fim
struct fila{
    Elemento *inicio;
    Elemento *fim;
};

//A partir da estrutura fila criamos o TIPO Fila
typedef struct fila Fila;

//Criar fila
Fila q;

//Função que inicia aloca memória e aponta para NULL
void criaFila(Fila *q){
    q = (Fila*)malloc(sizeof(Fila));
    q->inicio = NULL;
    q->fim = NULL;
}

//Função que insere elementos na fila
int inserirElemento(Fila *q, int valor){
    //Alocando espaço para um novo elemento
    Elemento *p = (Elemento*)malloc(sizeof(Elemento));

    if(p == NULL){
        return 0;
    }

    //Atribui valor ao elemento
    p->valor = valor;

    //Verifica se a fila está vazia
    if(q->inicio == NULL){
        q->inicio = p;
    }
    else{
        //Anterior sempre aponta para o elemento que chega
        q->fim->prox = p;
    }

    //Fim passa a ser o que chega
    q->fim = p;

    printf("inserindo %c \n\n", q->fim->valor);
    return 1;
}

//Função que remove elementos da fila
int removeElemento(Fila *q){
    int valor;

    //Fila Vazia
    if(q->inicio == NULL){
        printf("Fila Vazia \n");
        return 0;
    }

    valor = q->inicio->valor;

    Elemento *aux = q->inicio;
    //Muda o inicio para o próximo
    q->inicio = q->inicio->prox;

    free(aux);

    printf("Removendo %c \n\n", valor);
    return valor;
}


//Imprime a fila
void imprimeFila(Fila *q){
    Elemento *prox = q->inicio;
  if( q->inicio == NULL ) {
      printf("FILA VAZIA!\n");
    }
    int pos = 1;
  while (prox != NULL) {
      printf("Posição %d da fila: %c \n\n", pos, prox->valor);
      prox=prox->prox;
      pos = pos + 1;
    }

    printf("A fila tem %d posições.\n\n", pos-1);
}

int main(void) {
    
    criaFila(&q);
    
    inserirElemento(&q, 65);
    inserirElemento(&q, 66);
    inserirElemento(&q, 67);
    inserirElemento(&q, 68);
    inserirElemento(&q, 69);
    inserirElemento(&q, 70);
    inserirElemento(&q, 71);
    inserirElemento(&q, 72);
    inserirElemento(&q, 73);
    inserirElemento(&q, 74);
    inserirElemento(&q, 75);
    inserirElemento(&q, 76);
    inserirElemento(&q, 77);
    inserirElemento(&q, 78);
    inserirElemento(&q, 79);
    inserirElemento(&q, 80);
    inserirElemento(&q, 81);
    inserirElemento(&q, 82);
    inserirElemento(&q, 83);
    inserirElemento(&q, 84);
    inserirElemento(&q, 85);
    inserirElemento(&q, 86);
    inserirElemento(&q, 87);
    inserirElemento(&q, 88);
    inserirElemento(&q, 89);
    inserirElemento(&q, 90);

    imprimeFila(&q);

    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    removeElemento(&q);
    
    return 0;
}