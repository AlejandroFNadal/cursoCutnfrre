#include <stdio.h>

int main()
{

  int var1 = 30;

  int *punt = NULL;

  printf("El contenido de la variable es %d \n",var1);

  printf("La direccion de la variable var1 es %x \n",&var1);

  //Ahora, asignamos al puntero la direccion de var1.

  punt = &var1;

  printf("La direccion a la que apunta el puntero es %x \n",punt);

  printf("El contenido de la direccion a la que apunta el puntero es %d\n ",*punt);
  return 0;
}
  
