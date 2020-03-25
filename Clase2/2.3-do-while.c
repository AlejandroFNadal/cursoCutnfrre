#include <stdio.h>

int main()
{
    int edad;
    do{
        printf("\nBienvenido al bar Los Santos\n");
        printf("Ingrese una edad mayor a 18 para continuar\n");
        scanf("%d",&edad);
    }while(edad < 18);
    printf("Bienvenido");
    //Hasta que no ingrese una edad superior a 18, se seguira iterando. 
    //Es una manera de validar la entrada del usuario, aunque no es necesariamente la mejor
    getchar();
    return 0;
}