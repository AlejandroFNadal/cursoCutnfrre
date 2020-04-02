#include <stdio.h>

int main()
{
  int i;
  float mi_arreglo[3];

  for (i=0; i<=3; i++)
  {
  printf("Inserte el elemento del arreglo\n");
  scanf("%f",&mi_arreglo[i]);
  }
  for (i=0; i<=3; i++)
  {
    printf("Elemento: %f, \n", mi_arreglo[i] );  
  }
  getchar();
  return 0;
}