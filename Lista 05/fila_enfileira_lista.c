#include<stdlib.h>
#include<stdio.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *enfileira (celula *f, int x) {
  celula *novo = malloc(sizeof(celula));
  if (novo == NULL) {
    return 0;
  } 
  novo -> prox = f -> prox;
  f -> prox = novo;
  f -> dado = x;
  return novo;
}


celula *enfileira (celula *f, int x);