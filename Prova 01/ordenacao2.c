#include<stdio.h>
#include<stdlib.h>

void shellSort(int v[], int n)
{
  int i, j, h, temp;

  h = 1;
  do {
    h = 3*h+1;
  } while (h < n);
  do {
    h = h/3;
    for (i = h; i < n; i++) {
      temp = v[i];
      j = i;
      while(v[j-h] > temp) {
        v[j] = v[j-h];
        j-= h;
        if (j < h)
          break;
      }
      v[j] = temp;
    }
  }while (h!= 1);
}
int main() 
{
  int n;

  scanf("%d", &n);

  int V[n];

	for(int i=0;i<n;i++){
		scanf("%d", &V[i]);
	}

	shellSort(V,n);
	
  for(int i = 0; i < n; i++) {

    printf("%d", V[i]);
    
    if(i != n-1) {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}