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
