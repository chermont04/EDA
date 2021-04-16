#include <stdio.h>
#include <stdlib.h>


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
	int n, m, validate,aux;

  scanf("%d %d", &n, &m);

  int *v, *positions ;
  v = malloc(n * sizeof(int));
  positions = malloc(n*sizeof(int));

	for(int i=0;i<n;i++){
		scanf("%d", &v[i]);
    positions[i] = v[i];
	}

	shellSort(v,n);

  for(int i=0; i < m; i++) {
    scanf("%d", &validate);
    aux = binarySearch(validate, v, n); 
    if (aux == -1) {
      printf("%d\n", aux); 
    } 
    else {
      for(int j=0; j < n; j++) {
        if(positions[j] == validate) {
          printf("%d\n", j);
        }
      }
    }
  }
  free(v);
  free(positions);
  return 0;

}
