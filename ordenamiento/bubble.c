#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[10] = {0, 5, 4, 7, 3, 1, 6, 9, 8, 2};
	int i, j;
	int n = 10;
	int aux;
   
	for(int i=0;i<=n;i++)
	{ 
		for(int j=0;j<n-1;j++)
		{ 
			if(array[j]>array[j+1])
			{ 
				aux=array[j]; 
				array[j]=array[j+1]; 
				array[j+1]=aux; 
			} 
		} 
	} 

	for(i=0; i<n; i++){
		printf("%d ",array[i]);
	}
}

