#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[10] = {0, 5, 4, 7, 3, 1, 6, 9, 8, 2};
	int i, j,h;
	int n = 10;
	int aux,temp;

	for(i=0; i<n-1; i++){
		aux = i;
		for(j=i+1; j<n; j++){
			if( array[j]<array[aux] ){
				aux=j;
			}
			temp=array[aux];
			array[aux]=array[i];
			array[i]=temp;
			
		}
	}
	for(i=0; i<n; i++){
		printf("%d ",array[i]);
	}
}

	

