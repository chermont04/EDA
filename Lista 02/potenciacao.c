#include <stdio.h>

float potencia(float base, float expoente) {
  if(expoente < 0){
    return (1/base) * potencia(base, expoente+1);
  }
  else if(expoente == 0)
    return 1.0;
  else
    return (base * potencia(base, expoente-1));
}

int main() {
  float base,resultado;
  float expoente;

  scanf("%f", &base);
  scanf("%f", &expoente);

  resultado = potencia(base, expoente);

  if(base == 0 && expoente == 0)
    printf("indefinido\n");
  else if(expoente < 0)
    printf("%.3f\n", resultado);
  else {
    printf("%.1f\n", resultado);
  } 
  return 0;
}