#include<stdio.h>

int main()
{
    int matriz[3][3];
    int i,j;
    //ingreso valores
    for(j=0; j<3;j++)
    {
        for(i=2; i>=0; i--)
        {
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
    //leo valores

    for(i=0; i<3; i++)
    {
        for(j=0; j<3;j++)
        {
            printf("%d " , matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}