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

Fila *inicialize(){
  Fila *prim = (Fila*)malloc(sizeof(Fila));
  prim->ini = NULL;
  prim->fim = NULL;
  return prim;
}

void *push(Fila *p, int carta){
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

int pop(Fila *p){
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

  int n, i, carta, cont = 0;
  Fila *fila;

  fila = inicialize();

  scanf("%d", &n);
  if(n){
    cont = n;
    for(i=1;i<=n;i++){
      push(fila, i);
    }

    printf("Cartas descartadas:");

    while(cont!=1){
      printf(" %d", pop(fila));
      push(fila, pop(fila));

      if(cont!=2){
        printf(",");
      }
      cont--;
    }
    if(!vazio(fila)){
      printf("\nCarta restante: %d\n", pop(fila));
    }
  }
 return 0;
}