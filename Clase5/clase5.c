#include <stdio.h>

int main()
{
    int matriz1[4][7]; 

    int i;
    int j;
    //leer matriz
    for(i = 0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            scanf("%d",&matriz1[i][j]);
        }
    }
    //imprimir matriz
    for(i = 0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%3d ",matriz1[i][j]);
        }
        printf("\n");
    }
    getchar();

    return 0;
}