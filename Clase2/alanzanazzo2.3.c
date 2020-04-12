#include <stdio.h>
#include <stdbool.h>
int main() {
    int numero;
    int N = 2;
    bool bandera = true;
    printf("N%CMERO PRIMO \n", 233);
    printf("\nIngrese un n%cmero entero: ", 163);
    scanf("%d", &numero);
    if (numero > 1)
    {
        while (numero / N >= N)
        {
            if (numero % N != 0)
            {
                numero = numero / N;
                N++;
                if (numero / N >= N)
                {
                    break;
                }
            }
            else
            {
                bandera = false;
                break;
            }   
        }
    }
    else
    {
        bandera = false;
    }
 
    if (bandera)
    {
        printf("\nES PRIMO !!! \n");
    }
    else
    {
        printf("\nNO ES PRIMO !!! \n");
    }
    getchar ();
    return 0;
}
