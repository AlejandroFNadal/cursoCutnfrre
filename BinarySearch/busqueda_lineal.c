#include <stdio.h>
#include <time.h>
#include "../librerias/libreriarreglos.h"
#include <stdlib.h>
#include <math.h>

//prototipo
int busqueda_lineal(int arreglo[], int elemento, int longitud);
int bNsearch(int izq, int der, int pivot, int array[],int elemento);
int main()
{
  int arreglo10[10];
  int arregloMil[1000];
  int arregloCienMil[100000];
  int arregloUnMillon[1000000];
  int *arregloCienMillones = (int *)malloc(sizeof(int)*100000000);


  lArraywRandomData((int *)arreglo10,10,20);
  lArraywRandomData((int *)arregloMil,1000,2000);
  lArraywRandomData((int *)arregloCienMil,100000,200000);
  lArraywRandomData((int *)arregloUnMillon,1000000,2000000);
  lArraywRandomData((int *)arregloCienMillones,100000000,10000000);
  //printarray(arreglo10,10);

  clock_t start10 = clock();
  printf("Arreglo10. Elemento en pos %d",busqueda_lineal(arreglo10,4,10));
  clock_t end10 = clock();
  double cpu_time_10 = ((double)(end10-start10))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf \n",cpu_time_10);

  clock_t start10b = clock();
  printf("Binaria: Arreglo10. Elemento en pos %d",bNsearch(0,9,4,arreglo10,4));
  clock_t end10b = clock();
  double cpu_time_10b = ((double)(end10b-start10b))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf \n",cpu_time_10b);

  clock_t startMil = clock();
  printf("ArregloMil. Elemento en pos %d",busqueda_lineal(arregloMil,-5,1000));
  clock_t endMil = clock();
  double cpu_time_Mil = ((double)(endMil-startMil))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_Mil);

  clock_t startCienMil = clock();
  printf("ArregloCienMil. Elemento en pos %d",busqueda_lineal(arregloCienMil,-5,100000));
  clock_t endCienMil = clock();
  double cpu_time_CienMil = ((double)(endCienMil-startCienMil))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_CienMil);

  clock_t startUnMillon = clock();
  printf("ArregloUnMillon. Elemento en pos %d",busqueda_lineal(arregloUnMillon,-5,1000000));
  clock_t endUnMillon = clock();
  double cpu_time_UnMillon = ((double)(endUnMillon-startUnMillon))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_UnMillon);

  clock_t startCienMillon = clock();
  printf("ArregloCienMillon. Elemento en pos %d",busqueda_lineal(arregloCienMillones,-5,100000000));
  clock_t endCienMillon = clock();
  double cpu_time_CienMillon = ((double)(endCienMillon-startCienMillon))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_CienMillon);

  free(arregloCienMillones);
}

int busqueda_lineal(int arreglo[], int elemento, int longitud)
{
    int i;
    for(i=0;i<longitud;i++)
    {
        if(arreglo[i]== elemento)
        {
            return i;
        }
    }
    //No se encontro el elemento
    return -1;
}

int bNsearch(int izq, int der, int pivot, int array[],int elemento)
{
    printf("Izq %d Der %d Pivot %d val %d ",izq,der,pivot, array[pivot]);
    //caso base
    if(array[pivot] == elemento)
    {
        return pivot;
    }
    if(array[pivot] < elemento)
    {
        if(pivot == der || pivot == izq)
        {
            return -1;
        }
        else
        {
            return bNsearch(pivot,der,(int)ceil(((double)der+(double)pivot)/2),array,elemento);
        }
    }
    else
    {
        if(izq == pivot || pivot == izq)
        {
            return -1;
        }
        else
        {
            return bNsearch(izq,pivot,(int)floor((double)pivot/2),array,elemento);
        }
        
    }
    
}