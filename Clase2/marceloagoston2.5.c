// 2.5 Cargar arreglo mostrarlo y mostrar su inverso
// Marcelo Agoston
#include <stdio.h>

int main()
{
    int size;
    printf("--------------------------------------------\n");
    printf("Ingrese el tamaño que desea para su arreglo \n\n");
    scanf("%i", &size);
    printf("--------------------------------------------\n");
    int arr[size];
    for(int i=0; i <= size-1; i++){
   	 printf("Ingrese un valor a cargar en el arreglo en la posición %i\n", i);
   	 scanf("%i", &arr[i]);
    }
    printf("--------------------------------------------\n");
    printf("Su arreglo es: [ ");
    for(int i=0; i < size; i++){
   	 printf("%i ", arr[i]);
    }
    printf("]\n");

    printf("--------------------------------------------\n");
    printf("Su arreglo al reves es es: [ ");
    for(int i=size-1; i >= 0; i--){
   	 printf("%i ", arr[i]);
    }
    printf("]\n");
    return 0;
}

