#include <stdio.h>

int main()
{
    int m,n,p,q;
    
    
    printf("Ingrese el tamanio de la primera matriz\n");
    scanf("%d",&m);
    scanf("%d",&n);

    printf("Ingrese el tamanio de la segunda matriz\n");
    scanf("%d",&p);
    scanf("%d",&q);
    int mat1[m][n];
    int mat2[p][q];
    int subtotal=0;
    int total[m][q];
    if(n != p)
    {
        printf(" Usted no puede multiplicar estas matrices\n");
    }
    else
    {
        int c;
        int d;
        //cargar elementos primera matriz
        printf("Cargar elementos primera matriz 1 \n ");
            for (c = 0; c < m; c++)
                for (d = 0; d < n; d++)
                     scanf("%d", &mat1[c][d]);

        //cargar segunda matriz
        
        printf("Cargar elementos primera matriz 1 \n ");
            for (c = 0; c < p; c++)
                for(d = 0; d < q; d++)
                     scanf("%d", &mat2[c][d]);
        //multiplicacion
        for (int c = 0; c < m; c++) 
        {
            for (int d = 0; d < q; d++) 
            {
                for (int k = 0; k < p; k++) 
                {   
                    printf("Operacion %d = %d + %d * %d ", subtotal,subtotal,mat1[c][k],mat2[k][d]);
                    subtotal = subtotal + mat1[c][k] * mat2[k][d];
                }
                printf("\n");
                total[c][d] = subtotal;
                subtotal = 0;
            }
        }
    }
    
    //imprimir la matriz
    for(int a = 0; a < m; a++)
    {
        for(int b = 0; b < q;b++)
        {
            printf("%d",total[a][b]);
        }
        printf("\n");
    }
    return 0;
}