#include<stdio.h>
#include<stdlib.h>

#define ITEM int
#define SPEC "%d"

typedef struct celula {
  ITEM dado;
  struct celula *prox;
} celula;


int insere_inicio (celula *elem, int x) {
  celula *novo = malloc (sizeof (celula));
  if (novo == NULL) return 0;
  novo -> dado = x;
  novo -> prox = elem -> prox;
  elem -> prox = novo;
  return 1;
}

int insere_antes (celula *le, int x, int y) {
  celula *p, *q, *nova;
   nova = malloc (sizeof (celula));
   nova->dado = x;
   p = le;
   q = le->prox;
   while (q != NULL && q->dado != y) {
      p = q;
      q = q->prox;
   }
   nova->prox = q;
   p->prox = nova;

}

int inserir_inicio (celula *elem, int x);

int insere_antes (celula *le, int x, int y);