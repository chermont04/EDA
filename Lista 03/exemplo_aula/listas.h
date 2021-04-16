typedef struct no {
  int dado;
  struct no *prox;
} no;

no *cria_lista();

int inserir (no *elem, int x);

int remover (no *elem, int *y);

void imprimir (no *le);

void *destroi_lista (no *le);

