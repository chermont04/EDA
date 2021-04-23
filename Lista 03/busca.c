#include<stdio.h>
#include<stdlib.h>

#define ITEM int
#define SPEC "%d"

typedef struct celula {
  ITEM dado;
  struct celula *prox;
} celula;

/*
void imprimir_menu(int *op) {
  printf("\n\nSelecione uma opcao:\n");
  printf("1 - Criar lista\n");
  printf("2 - inserir elemento no inicio\n");
  printf("3 - Remover primeiro elemento\n");
  printf("4 - Imprimir lista\n");
  printf("5 - Destruir lista\n");
  printf("0 - Sair\n");
  printf("Digite sua opcao: ");
  scanf("%d", op);
}

celula *cria_lista() {
  celula *le = malloc (sizeof(celula));
  le -> prox = NULL;
  return le;
}

int inserir (celula *elem, ITEM x) {
  celula *novo = malloc (sizeof (celula));
  if (novo == NULL) return 0;
  novo -> dado = x;
  novo -> prox = elem -> prox;
  elem -> prox = novo;
  return 1;
}

int remover (celula *elem, ITEM *y) {
  celula *lixo = elem -> prox;
  if (lixo == NULL) return 0;
  elem -> prox = lixo -> prox;
  *y = lixo -> dado;
  free(lixo);
  return 1;
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

celula *destroi_lista (celula *le) {
  int dado;
  while (remover (le, &dado));
  free (le);
  le = NULL;
  return le;
}

*/

celula * busca (celula *le, int x){
   celula *p;
   p = le;
   while (p != NULL && p->dado != x) 
      p = p->prox; 
   return p;
}

celula *busca_rec (celula *le, int x)
{
   if (le == NULL)  return NULL;
   if (le->dado == x)  return le;
   return busca_rec (le->prox, x);
}

/*
celula *cria_lista();

int inserir (celula *elem, int x);

int remover (celula *elem, int *y);


void imprime (celula *le);

void imprime_rec (celula *le);

celula *destroi_lista (celula *le);

*/

celula * busca (celula *le, int x);
celula * busca_rec (celula *le, int x);

/*
int main () {
  int op;
  ITEM dado;
  celula *le;

  imprimir_menu(&op);
  while (op != 0) {
    switch (op) {
      case 1:
        le = cria_lista();
        break;

      case 2:
        printf("Digite o celulavo dado: ");
        scanf(SPEC, &dado);
        if (inserir(le, dado))
          printf("Elemento inserido com sucesso.\n");
        else 
          printf("Problema na hora de inserir.\n");
        break;

      case 3:
        if (remover(le, &dado)) {
          printf("Elemento removido:");
          printf(SPEC, dado);
          printf("\n");
        }
        else 
          printf("A lista esta vazia.\n");
        break;

      case 4:
        printf("\n\n");
        imprime (le);
        printf("\n\n");
        imprime_rec(le);
        printf("\n\n");
        break;

      case 5:
       le = destroi_lista(le);
        break;

      case 6:
      printf("%p", busca(le, 4));
    }

    imprimir_menu(&op);
  }

  return 0;
}

*/