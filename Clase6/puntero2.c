#include <stdio.h>
#include <stdlib.h>
int main()
{
  char cadena[5]={'H','o','l','a','\0'};
  
  printf("La cadena es %s \n",cadena);

  printf("La direccion de la cadena es %x \n",cadena);

  char *punt = cadena;
  
  printf("El puntero contiene la direccion %x\n",punt);

  printf("El contenido de la direccion de punt es %c \n",*punt);

  printf("El contenido de la direccion que sigue a punt es: %c \n",*(punt+1));

  printf("El contenido de la direccion que sigue a la anterior es %c \n",*(punt + 2));

  return 0;
}
