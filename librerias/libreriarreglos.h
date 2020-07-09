#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//llena un arreglo con valores aleatorios, requiere del arreglo, la longitud y el tamano maximo de los elementos
void lArraywRandomData(int *array, int length, int max)
{
    srand(time(NULL));
    int i;
    for(i = 0;i < length;i++)
    {
        *(array+i)=rand()%max;
    }
}
void lArraywOrderedData(int *array, int length, int max)
{
    srand(time(NULL));
    int i;
    for(i = 0;i < length;i++)
    {
        *(array+i)=i;
    }
}
void printarray(int array[], int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("%d ,",array[i]);
    }
}
void orderbyselection(int array[], int length)
{
    int swap, cont, continterno,min;
    for(cont=0;cont<(length-1);cont++)
    {
        min=cont;
        for(continterno=cont+1;continterno<length;continterno++)
        {
            if(array[continterno]<array[min])
            {
                min=continterno;
            }
        }

        if(cont != min)
        {
            swap=array[cont];
            array[cont]=array[min];
            array[min]=swap;
        }
    }
}
void bubbleOrder(int a[], int length)
{
	int aux;
	for(int i=0;i<=length;i++)
		{ 
			for(int j=0;j<length-1;j++)
			{ 
				if(a[j]>a[j+1])
				{ 
					aux=a[j]; 
					a[j]=a[j+1]; 
					a[j+1]=aux; 
				} 
			} 
		} 
}
//Insercion
/*for(cont = 1;cont <=cant; cont++)
    {
        swap=array[cont];

        auxcont=cont-1;
        while(auxcont>=0 && swap < array[auxcont])
        {
            array[auxcont+1]=array[auxcont];
            auxcont--;
        }
        array[auxcont+1]= swap;
}
*/
