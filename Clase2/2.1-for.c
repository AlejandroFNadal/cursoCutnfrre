#include <stdio.h>

int main()
{
    int num;
    printf("Ingresar el número límite: ");
    scanf("%d",&num); 
    for (int i =0; i <= num; i+=2) {
        printf("%d\n",i);
    }
    
    getchar();
    return 0;
}

