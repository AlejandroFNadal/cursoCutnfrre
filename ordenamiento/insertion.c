#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[10] = {0, 5, 4, 7, 3, 1, 6, 9, 8, 2};
	int i, j,h;
	int n = 10;
	int aux,temp;

	for(i=1; i<n; i++){
        j=i;
        while(j>0 && array[j]<array[j-1]){
            aux=array[j];
            array[j]=array[j-1];
            array[j-1]=aux;
            j--;
        }
    }

	for(i=0; i<n; i++){
		printf("%d ",array[i]);
	}
}
