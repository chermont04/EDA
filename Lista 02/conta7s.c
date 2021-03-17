#include<stdio.h>

int count=0;

long int count_7(long int n){
  if (n==0)
    return 0;
  else
  {
    if((n%10) == 7)
      count++;
  n = n / 10;
  return count_7(n);
  }
  return 0;
}

int main() {
  long int numero;
  scanf("%ld", &numero);
  count_7(numero);
  printf("%d\n", count);

  return 0;
}