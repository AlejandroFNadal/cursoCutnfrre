#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void lArraywRandomData(int *array[], int lenght, int max)
{
    srand(time(NULL));
    int i;
    for(i = 0;i < lenght;i++)
    {
        *(array+i)=rand()%max;
    }
}

void printarray(int array[], int lenght)
{
    int i;
    for(i=0;i<lenght;i++)
    {
        printf("%d -",array[i]);
    }
}
int *orderbyselection(int array[], int length)
{
    int *punteroretorno;
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
    return array;
}
