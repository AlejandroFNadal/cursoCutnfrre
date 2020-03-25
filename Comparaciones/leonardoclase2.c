#include <stdio.h>
int main()
{
    int numero, cant_divisores,divisores;
printf("Ingrese un numero para saber si es primo :");
scanf("%d",&numero);
cant_divisores = 0;
divisores = 1;

while ( divisores <= numero )
{
    if (numero % divisores == 0)
    {
        cant_divisores++;
    } 
    divisores++;
}

if (cant_divisores > 2)
{

    printf("El numero %d NO ES PRIMO",numero);
}
else
{
    printf("El numero %d ES PRIMO", numero);
}
 getchar();

 return 0;
}