#include <stdio.h>
#include <stdlib.h>


void merge(int *V,int s,int e){
    int mid = (s+e)/2;
    
    int i = s;
    int j = mid+1;
    int k = s;
    
    int temp[100000];
    
    while(i<=mid && j<=e){
        if(V[i] < V[j]){
            temp[k++] = V[i++];
        }
        else{
            temp[k++] = V[j++];
        }
    }
    while(i<=mid){
        temp[k++] = V[i++];
    }
    while(j<=e){
        temp[k++]  = V[j++];
    }
    
    for(int i=s;i<=e;i++){
        V[i] = temp[i];
    }
    
}

void mergeSort(int V[],int s,int e){

    if(s>=e){
      return;
    }
    
    int mid = (s+e)/2;
  
    mergeSort(V,s,mid);
    mergeSort(V,mid+1,e);

    merge(V,s,e);

}


int main(){
	int n;

  scanf("%d", &n);

  int V[n];

	for(int i=0;i<n;i++){
		scanf("%d", &V[i]);
	}

	mergeSort(V,0,n-1);
	
  for(int i = 0; i < n; i++) {

    printf("%d", V[i]);
    
    if(i != n-1) {
      printf(" ");
    }
  }
  printf("\n");



}
