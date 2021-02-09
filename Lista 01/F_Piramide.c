#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
   for(int i = 1; i <= n; i++) {
     for(int j=0; j < i; j++) {
       if (i < 10) {
        printf("0%d ", i);
       }
       else { printf("%d ", i);}
     }
     printf("\n");
   }

  printf("\n");

   for(int i = 1; i <= n; i++) {
     for(int j=1; j <= i; j++) {
      if (j < 10) {
        printf("0%d ", j);
      }
      else {printf("%d ", j);}
     }
    printf("\n");
   }

  return 0;
}