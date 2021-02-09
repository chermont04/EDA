#include<stdio.h>

int main() {
  int n;
  int tamanho;

  scanf("%d", &n);

  tamanho = n*2;

  for(int i = 0; i < tamanho; i++) {
    for(int j = 0; j < tamanho-i; j++) {
      printf(" ");
    }

    for(int k = 0; k <= i; k++) {
      if (i%2 == 0) {
        printf("* ");
      }
    }

    printf("\n");

  }
  return 0;
}