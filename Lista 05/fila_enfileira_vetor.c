#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
  int *dados;
  int N, p, u;
} fila;

int enfileira (fila *f, int x) {
  int i, j;
  if ((f -> u + 1) % f->N == f -> p) {
    f->dados = realloc(f->dados, 2*f->N*sizeof(int));
    if(f->u != f->N-1) {
      if(f->u-1 < f->N - f-> p) {
        for(i=f->N, j=0; j < f->u; i++, j++)
          f->dados[i] = f->dados[j];
        f->u = f->N + f->u;
      } else {
        for(i=f->p, j=f->N + f->p; i < f->N; i++, j++)
          f->dados[j] = f-> dados[i];
        f->p = f->N + f->p;
      }
    }
    f->N *= 2;
  } 
  
  f -> dados[f->u++] = x;
  if (f -> u == f-> N) f->u = 0;
  return 1;
}

int enfileira (fila *f, int x);

