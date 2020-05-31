#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creamos puntero del tipo archivo
    FILE *image = NULL;
    //creamos el archivo del formato utn
    image = fopen("imagen.utn","wb");

    u_int8_t mat_imagen[600][400][3];
    int i,j,k=0;
    printf("%d",sizeof(mat_imagen));
    for(i=0;i<600;i++)
    {
        for(j=0;j<400;j++)
        {
            mat_imagen[i][j][0]=rand()%255;
            mat_imagen[i][j][1]=rand()%255;
            mat_imagen[i][j][2]=rand()%255;
            
            
            
        }
    }
    //llenar con random elemens
    fwrite(mat_imagen,sizeof(mat_imagen),1, image);


    //Nunca olvidar cerrar el programa
    fclose(image);

}