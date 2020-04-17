#include <stdio.h>

int main()
{
    int lluvia[4][7];

    for(int i = 0;i< 4; i++)
    {
        for(int j=0;j<7;j++)
        {
            scanf("%d",&lluvia[i][j]);
        }
    }

    printf("Mes de marzo\n");
    printf("  D    L    M    M    J    V    S\n");
    for(int i = 0;i< 4; i++)
    {
        for(int j=0;j<7;j++)
        {
            printf("%3d |",lluvia[i][j]);
        }
        printf("\n");
    }

    return 0;
}