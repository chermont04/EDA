#include <stdio.h>

int main () {
  int teste=0 ,m, valor[100];
  char operacao[100];
  int resultado;
  scanf("%d", &m);

  while (m != 0) {
    resultado=0;

    for (int i = 0; i < m; i++) {
      scanf("%d", &valor[i]);
      if(i == 0) { resultado = valor[i];}
      if(i < m-1) {
        scanf("%c", &operacao[i]);
      }
    }

    for(int i = 1; i < m; i++) {
      if (operacao[i-1] == '+') {
        resultado += valor[i];
      } else {
        resultado -= valor[i];
      }
    }

    teste++;
    printf("Teste %d\n", teste);
    printf("%d\n", resultado);

    scanf("%d", &m);

  }

  return 0;
}