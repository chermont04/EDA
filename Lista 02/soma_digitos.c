#include<stdio.h>

long int soma_digitos(long int n){
  if (n % 10 == n)
    return n;
  printf("%d\n", n);
  return ((n % 10) + soma_digitos(n/10));
}

int main() {
  long int numero, soma;
  scanf("%ld", &numero);

  soma = soma_digitos(numero);

  printf("%ld\n", soma);

  return 0;
}