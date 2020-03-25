#include <stdio.h>

int main()
{
    int num, acum;
    printf("Ingresar el número límite: ");
    scanf("%d",&num); 
    acum=1;
    for (int i =1; i <= num; i++) {
        acum=acum*i;
    }
    printf("%d",acum);
    getchar();
    return 0;
}

