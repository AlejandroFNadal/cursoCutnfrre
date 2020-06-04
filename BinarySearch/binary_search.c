#include <stdio.h>
#include <unistd.h>
#include <math.h>

int bsearch(int izq, int der, int pivot, int array[],int elemento)
{
    printf("Izq %d Der %d Pivot %d val %d ",izq,der,pivot, array[pivot]);
    //caso base
    if(array[pivot] == elemento)
    {
        return pivot;
    }
    if(array[pivot] < elemento)
    {
        if(pivot == der)
        {
            return -1;
        }
        else
        {
            return bsearch(pivot,der,(int)ceil(((double)der+(double)pivot)/2),array,elemento);
        }
    }
    else
    {
        if(izq == pivot)
        {
            return -1;
        }
        else
        {
            return bsearch(izq,pivot,(int)floor((double)pivot/2),array,elemento);
        }
        
    }
    
}

int main()
{
    int arreglo[]={1,3,5,7,9,10};
    int i;
    /*for(i=0;i<100;i++)
    {
        arreglo[i]=i;
    }*/
    int resultado;
    resultado = bsearch(0,5,2,arreglo,10);
    printf("Resultado = %d",resultado);
}