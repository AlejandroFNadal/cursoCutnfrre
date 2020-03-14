#include <stdio.h>

int main()
{
  //declaramos un arreglo de reales de 4 posiciones
  float mi_arreglo[4];

  //Ahora, rellenamos las posiciones del arreglo.
  mi_arreglo[0] = 3.2;
  mi_arreglo[1] = 2.56;
  mi_arreglo[2] = 1.003;

  //cargamos la 3ra posicion con scanf
  printf("Inserte el 4to elemento del arreglo\n");
  scanf("%f",&mi_arreglo[3]);

  printf("Los elementos del arreglo son %f %f \n",mi_arreglo[0],mi_arreglo[1]);
  printf("Los elementos que siguen son %f %f \n", mi_arreglo[2], mi_arreglo[3]);
  getchar();
  return 0;
}

  
