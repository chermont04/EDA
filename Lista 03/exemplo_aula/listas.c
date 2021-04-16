#include<stdio.h>
#include<stdlib.h>

#define ITEM int
#define SPEC "%d"

typedef struct no {
  ITEM dado;
  struct no *prox;
} no;

no *cria_lista() {
  no *le = malloc (sizeof(no));
  le -> prox = NULL;
  return le;
}

int inserir (no *elem, ITEM x) {
  no *novo = malloc (sizeof (no));
  if (novo == NULL) return 0;
  novo -> dado = x;
  novo -> prox = elem -> prox;
  elem -> prox = novo;
  return 1;
}

int remover (no *elem, ITEM *y) {
  no *lixo = elem -> prox;
  if (lixo == NULL) return 0;
  elem -> prox = lixo -> prox;
  *y = lixo -> dado;
  free(lixo);
  return 1;
}

void imprimir (no *le) {
  printf("le");
  if (le != NULL)
    for(no *elem = le -> prox; elem != NULL; elem = elem -> prox) {
      printf(" -> ");
      printf(SPEC, elem -> dado);
    }
  printf(" -> NULL\n");
}

no *destroi_lista (no *le) {
  int dado;
  while (remover (le, &dado));
  free (le);
  le = NULL;
  return le;
}
