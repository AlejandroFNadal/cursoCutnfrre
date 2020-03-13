#include <stdio.h>

int main()
{
    int edad;
    do{
        printf("Bienvenido al bar Los Santos");
        printf("Ingrese una edad mayor a 18 para continuar");
        scanf("%d",&edad);
    }while(edad < 18)
    //Hasta que no ingrese una edad superior a 18, se seguira iterando. 
    //Es una manera de validar la entrada del usuario, aunque no es necesariamente la mejor
    getchar();
    return 0;
}