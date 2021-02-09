#include <stdio.h>

int main() {

  int n,maior = -2147483648;

  while(scanf("%d",&n) != EOF){
      if (n > maior) {
        maior = n;
      }
  } 
  
  printf("%d\n",maior);
  return 0;
}