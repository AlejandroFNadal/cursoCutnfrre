#include <stdio.h>

struct pago{
    char nombre[30];
  char apellido[30];
  int salario;
};

void cargar_salario(struct pago arreglo_pagos[],int cant);
void generar_informe(struct pago arreglo_pagos[],int cant);
void imprimir_informe(struct pago arreglo_pagos[],int cant);

int main()
{
  struct pago arreglo_pagos[20];
  int seleccion;
  int cantidad_liquidaciones=0;
  do{
    printf("Liquidacion de sueldos\n");
    printf("1. Cargar nuevo salario\n");
    printf("2. Generar reporte\n");
    printf("3. Salir\n");
    scanf("%d",&seleccion);

    switch(seleccion)
    {
      case 1:
	  getchar();
	cargar_salario(arreglo_pagos,cantidad_liquidaciones);
	cantidad_liquidaciones++;
	break;
      case 2:
	  generar_informe(arreglo_pagos,cantidad_liquidaciones);
	break;
      case 3:
	break;
      default:
	printf("Opcion incorrecta\n");
	break;
    }
  }while(seleccion != 3);
  return 0;
}

void cargar_salario(struct pago arreglo_pagos[],int cant)
{
    struct pago nuevo_pago;
    printf("Ingrese el nombre\n");
    fgets(nuevo_pago.nombre, 30, stdin);

    printf("Ingrese el apellido\n");
    fgets(nuevo_pago.apellido,30,stdin);

    printf("Ingrese el salario\n");
    scanf("%d",&nuevo_pago.salario);
    arreglo_pagos[++cant] = nuevo_pago;
}
void generar_informe(struct pago arreglo_pagos[],int cant)
{
    printf("Generando informe\n");
}
void imprimir_informe(struct pago arreglo_pagos[],int cant)
{
    for(int i = 0; i < cant; i++)
	{
	    
}
