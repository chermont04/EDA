#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct celula {
  char matricula[10];
  double mediaAtividades;
  double mediaProvas;
  struct celula *prox;
} celula;

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media){
  for (le=le->prox; le != NULL; le = le -> prox) {
    if(le->mediaAtividades <= media){
      l1 -> prox = le;
      l1 = l1 -> prox;
    }else {
      l2 -> prox = le;
      l2 = l2 -> prox;
    }
  }
  l1 -> prox= NULL;
  l2 -> prox = NULL;
}

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media);

/*
celula* cria() {
  celula *le = malloc (sizeof(celula));
  le -> prox = NULL;
  return le;
}
/
celula *insere(celula *le, char matricula[], double mediaAtividades, double mediaProvas) {
  celula*novo = (celula*) malloc(sizeof(celula));

  strcpy(novo -> matricula, matricula);
  novo -> mediaAtividades = mediaAtividades;
  novo -> mediaProvas = mediaProvas;
  novo -> prox = le;
  return novo;
}

void imprime(celula *le) {
  celula *tmp;
  for (tmp = le -> prox; tmp -> prox != NULL; tmp = tmp -> prox) {
    printf("matricula: %s\n", tmp-> matricula);
    printf("media atividades: %lf\n", tmp -> mediaAtividades);
    printf("media provas: %lf\n", tmp -> mediaProvas);
  }
}

celula * libera(celula *le) {
  celula*l1 =le;
  while(l1 != NULL) {
    celula*t = l1 ->prox;
    free(l1);
    l1 = t;
  }
  return NULL;
}
*/
/*
int main() {
  celula *le;
  celula *l1;
  celula *l2;
  double media;
  char matricula[10] = "160119570";

  le = cria();
  l1 = cria();
  l2 = cria();

  le = insere(le, matricula, 10, 2);
  le = insere(le, matricula, 4, 6);
  le = insere(le, matricula, 9, 4);
  le = insere(le, matricula, 5, 4);

  // printf("\n lista original: \n");

  // imprime(le);

  scanf("%lf",&media);

  relatorioMediaAtividades(le, l1, l2, media);

  printf("\n\nseparação");
  imprime(l1);

  printf("\n\nseparação");
  imprime(l2);

  return 0;
}

*/