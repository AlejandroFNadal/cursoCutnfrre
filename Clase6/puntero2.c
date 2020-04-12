#include <stdio.h>

int main()
{
  char cadena[5]={'H','o','l','a','\0'};

  printf("La cadena es %s \n",cadena);

  printf("La direccion de la cadena es %x \n",cadena);

  char *punt = cadena;
  
  printf("El puntero contiene %x\n",punt);
  return 0;
}
