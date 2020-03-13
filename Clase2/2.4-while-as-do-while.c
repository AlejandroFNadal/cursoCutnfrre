#include <stdio.h>
#include <stdbool.h>
int main()
{
    int edad;
    bool flag = true;
    while(flag)
    {
        printf("\nBienvenido al bar Los Santos\n");
        printf("Ingrese una edad mayor a 18 para continuar\n");
        scanf("%d",&edad);
        if(edad > 18)
        {
            flag = false;
        }
    }
    getchar();
    return 0;
}