#include<stdio.h>
#include<stdlib.h>
#include "listas.h"

#define N 10
#define ITEM int
#define SPEC "%d"

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


int main () {
  int op;
  ITEM dado;
  no *le;

  imprimir_menu(&op);
  while (op != 0) {
    switch (op) {
      case 1:
        le = cria_lista();
        break;

      case 2:
        printf("Digite o novo dado: ");
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
        imprimir (le);
        break;

      case 5:
       le = destroi_lista(le);
        break;
    }

    imprimir_menu(&op);
  }

  return 0;
}