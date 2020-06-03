#include <stdio.h>
#include <time.h>
#include "../librerias/libreriarreglos.h"
#include <stdlib.h>
//prototipo
int busqueda_lineal(int arreglo[], int elemento, int longitud);

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
  printarray(arreglo10,10);

  clock_t start10 = clock();
  printf("Arreglo10. Elemento en pos %d",busqueda_lineal(arreglo10,15,10));
  clock_t end10 = clock();
  double cpu_time_10 = ((double)(end10-start10))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf \n",cpu_time_10);

  clock_t startMil = clock();
  printf("ArregloMil. Elemento en pos %d",busqueda_lineal(arregloMil,15,1000));
  clock_t endMil = clock();
  double cpu_time_Mil = ((double)(endMil-startMil))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_Mil);

  clock_t startCienMil = clock();
  printf("ArregloCienMil. Elemento en pos %d",busqueda_lineal(arregloCienMil,15,100000));
  clock_t endCienMil = clock();
  double cpu_time_CienMil = ((double)(endCienMil-startCienMil))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_CienMil);

  clock_t startUnMillon = clock();
  printf("ArregloUnMillon. Elemento en pos %d",busqueda_lineal(arregloUnMillon,15,1000000));
  clock_t endUnMillon = clock();
  double cpu_time_UnMillon = ((double)(endUnMillon-startUnMillon))*1000/CLOCKS_PER_SEC;
  printf(" Tiempo requerido: %lf\n",cpu_time_UnMillon);

  clock_t startCienMillon = clock();
  printf("ArregloCienMillon. Elemento en pos %d",busqueda_lineal(arregloCienMillones,15,100000000));
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
