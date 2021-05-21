#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int info;
  struct celula *prox;
}Celula;

typedef struct fila{
  Celula *ini;
  Celula *fim;
}Fila;

Fila *inicio(){
  Fila *prim = (Fila*)malloc(sizeof(Fila));
  prim->ini = NULL;
  prim->fim = NULL;
  return prim;
}

void *empilha(Fila *p, int carta){
  Celula *novo = (Celula*)malloc(sizeof(Celula));
  novo->info = carta;
  novo->prox = NULL;
  if(p->ini==NULL){
    p->ini = novo;
    p->fim = novo;
  }else{
    p->fim->prox = novo;
    p->fim = novo;
  }
}

int desempilha(Fila *p){
  int carta;
  Celula *l;

  l = p->ini;
  carta = l->info;

  p->ini = l->prox;
  if(p->ini==NULL){
    p->fim = NULL;
  }
  free(l);
  return carta;
}

int vazio(Fila *p){
  return p->ini==NULL;
}

int main(){

  int n, carta, cont = 0;
  Fila *fila;

  fila = inicio();

  scanf("%d", &n);
  if(n){
    cont = n;
    for(int i=1;i<=n;i++){
      empilha(fila, i);
    }

    printf("Cartas descartadas:");

    while(cont!=1){
      printf(" %d", desempilha(fila));
      empilha(fila, desempilha(fila));

      if(cont!=2){
        printf(",");
      }
      cont--;
    }
    if(!vazio(fila)){
      printf("\nCarta restante: %d\n", desempilha(fila));
    }
  }

 return 0;
}