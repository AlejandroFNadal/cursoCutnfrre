#include<stdio.h>
void main()
{
    int n;
    printf("Elija el tamaño del arreglo:\n");
    scanf("%i", &n);
    int arreglo[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un valor.\n");
        scanf("%i", &arreglo[i]);
    }
    printf("\n");
    printf("Su arreglo es: \n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%i ", arreglo[i]);
    }
    return 0;
}
