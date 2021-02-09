/*
até 10 	incluso na franquia
11 a 30 	R$ 1
31 a 100 	R$ 2
101 em diante 	R$ 5
*/

#include <stdio.h>

int main() {
  int consumo, conta=7;
  int volume[3] = {10, 30, 100};
  int taxa[3] = {1, 2, 5};
  int maxTaxas[2] = {20, 160};

  scanf("%d", &consumo);

  if (consumo >= 11 && consumo <= 30) {
   conta += (consumo - volume[0]) * taxa[0];
  }

  else if (consumo >= 31 && consumo <= 100) {
    conta += (consumo - volume[1]) * taxa[1] + maxTaxas[0]; 
  }

  else if (consumo > 100) {
    conta += (consumo - volume[2]) * taxa[2] + maxTaxas[1];
  }
 
  printf("%d\n", conta);

  return 0;
}