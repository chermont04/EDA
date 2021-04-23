#include<stdlib.h>
#include<stdio.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;


int remove_depois (celula *p)
{ 
  int *y;
  celula *lixo = p -> prox;
  if (lixo == NULL) return 0;
  p -> prox = lixo -> prox;
  *y = lixo -> dado;
  free(lixo);
  return 1;
}

void remove_elemento (celula *le, int x)
{
  celula *p, *q;
  p = le;
  q = le->prox;
  while (q != NULL && q->dado != x) {
    p = q;
    q = q->prox;
  }
  if (q != NULL) {
    p->prox = q->prox;
    free (q);
  }
}

void remove_todos_elementos (celula *le, int x){
  if (le != NULL)
    for (celula *elem = le; elem -> prox != NULL; elem = elem -> prox) {
      if (elem -> prox -> dado == x) {
        remove_depois(elem);
      }
      else {
        elem = elem -> prox;
      }
    }
}


int remove_depois (celula *p);

void remove_elemento (celula *le, int x);

void remove_todos_elementos (celula *le, int x);

