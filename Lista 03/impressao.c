#include<stdio.h>
#include<stdlib.h>

#define ITEM int
#define SPEC "%d"

typedef struct celula {
  ITEM dado;
  struct celula *prox;
} celula;


celula *cria_lista() {
  celula *le = malloc (sizeof(celula));
  le -> prox = NULL;
  return le;
}


void imprime (celula *le) {
  if (le != NULL)
    for(celula *elem = le -> prox; elem != NULL; elem = elem -> prox) {
      printf(SPEC, elem -> dado);
      printf(" -> ");
    }
  printf("NULL\n");
}

void imprime_rec (celula *le) {
    if (le != NULL) {
      if(le -> dado != 0){
        printf(SPEC, le -> dado);
        printf(" -> ");
      }
        imprime_rec (le->prox);
   } else {
     printf("NULL\n");
   }
   }

void imprime (celula *le);

void imprime_rec (celula *le);

