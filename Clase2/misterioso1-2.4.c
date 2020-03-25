#include<stdio.h>
void main()
{
    int n,i,f,j;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    printf("Los numeros primos son: \n");
    for(i=1; i<=n; i++)
    {
        f=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                f++;
        }
        if(f==2)
            printf("%d " ,i);
    }
    getchar();
}



