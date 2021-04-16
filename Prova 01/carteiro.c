#include<stdio.h>
#include<stdlib.h>

void bubble_sort (int vetor[], int n, int index[]) {
    int k, j, aux,aux2;
    for (k = n - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                aux2 = index[j];
                index[j] = index[j + 1];
                index[j + 1] = aux2;
            }
        }
    }
}


int binarySearch(int key, int v[], int size) 
{
  int pos = -1;
  if(size==0) {
    return pos;
  } else {
    int start = 0; int end = size-1;
    do {
      pos = (start+end)/2;
      if(key < v[pos]) {
        end = pos - 1;
      } else {
        start = pos + 1;
      }
    } while (key != v[pos] && start <= end);
  }

  if(key==v[pos]) {
    return pos;
  } else {
    return -1;
  }
}

void printVector(int v[], int size) {
  for(int n=0; n < size; n++) {
    printf("%d ", v[n]);
  }
  printf("\n");
}

int main(){
  int n, m;
  int time = 0;
  int position = 1;
  int *houses, *pkgs, *index;
  houses = malloc(n * sizeof(int));
  index = malloc(n * sizeof(int));
  pkgs = malloc(m * sizeof(int));

  scanf("%d %d", &n, &m);

  for(int i = 0; i < n; i++) {
    scanf("%d", &houses[i]);
    index[i] = i;
  }
  for(int i = 0; i < m; i++) {
    scanf("%d", &pkgs[i]);
  }

  bubble_sort(houses, n, index);

  printVector(houses,n);
  printVector(index,n);

  free(houses);
  free(index);
  free(pkgs);

  return 0;

}
