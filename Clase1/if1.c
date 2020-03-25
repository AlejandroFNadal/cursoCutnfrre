
#include <stdio.h>

int main()
{

  int edad;

  printf("Circo Trampolin\n");
  printf("Ingrese la edad del cliente\n");

  scanf("%d",&edad);

  if(edad < 0)
  {
    printf("Usted aun no ha nacido. Vayase de nuestro circo, por favor\n");
  }
  else if(edad > 0 && edad < 5)
  {
    printf("Felicidades, usted no paga entrada\n");
  }
  else if(edad >= 5 && edad < 18)
  {
    printf("Usted tiene 20% de descuento\n");
  }
  else
  {
    printf("Bienvenido, usted no tiene descuento. :-(\n");
  }
  getchar();
  return 0;
}
