// 2.1 calculadora y menu en C
// Combinacion del ejercicio 1 con el complementario
// Marcelo Agoston
#include <stdio.h>

#define RESET_COLOR    "\x1b[0m"
#define ROJO_T    "\x1b[31m"
#define VERDE_T       "\x1b[32m"

int main()
{
    int caso,aux1,aux2;
    printf("--------------------------------------------\n");
    printf("Ingrese una opción para realizar una operacion: \n 1- Sumar \n 2- Restar \n 3- Multiplicar \n 4- Dividir \n 5- Modulo \n #- Presione cualquier tecla para salir\n");
    printf("--------------------------------------------\n");
    printf("Ingrese una opción para realizar una operacion: \n\n");
    scanf("%i", &caso);
    printf("--------------------------------------------\n");

    switch(caso){
 //para que quede como pide el ejercicio 1 eliminar todos los scan y printf debajo del primer printf de cada caso
        case 1:
        printf("Ingrese 2 numeros para sumarlos \n");
        scanf("%i", &aux1);
        scanf("%i", &aux2);
        printf("El resultado de la suma es igual a :%i\n", aux1+aux2 );
        break;
        case 2:
        printf("Ingrese 2 numeros para restarlos \n");
        scanf("%i", &aux1);
        scanf("%i", &aux2);
        printf("El resultado de la resta es igual a :%i\n", aux1-aux2 );
        break;
        case 3:
        printf("Ingrese 2 numeros para multiplicarlos \n");
        scanf("%i", &aux1);
        scanf("%i", &aux2);
        printf("El resultado de la multipĺicacion es igual a :%i\n", aux1*aux2 );
        break;
        case 4:
        printf("Ingrese 2 numeros para dividirlos \n");
        scanf("%i", &aux1);
        scanf("%i", &aux2);
        printf("El resultado de la division es igual a :%i\n", aux1/aux2 );
        printf("El resto de esta division es igual a :%i\n", aux1%aux2 );
        break;
        case 5:
        printf("Ingrese 2 numeros para obtener el resto \n");
        scanf("%i", &aux1);
        scanf("%i", &aux2);
        printf("El resto de la division es igual a :%i\n", aux1%aux2 );
        break;
        default:
            break;
    }
    // en la semana subo mas operaciones a este mismo codigo
    return 0;
}