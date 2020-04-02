#include <stdio.h>
#include <string.h> //Necesario para fgets
#include <ctype.h> //Necesario para todas las funciones de validacion
#include <stdbool.h>

struct Datos 
    {
        char nombre[20];
        int edad;
    };

int main()
{
    struct Datos alumno;
    struct Datos alumnos[5];

    for(int i=0;i<5;i++)
    {
        
        printf("Ingrese el nombre del alumno %i: \n",i+1);
        fgets(alumnos[i].nombre,20,stdin);
    	

        printf("Ingrese la edad: \n");
        scanf("%i",&alumnos[i].edad);
	while(getchar()!='\n');
    };
    for(int i=0;i<5;i++)
    {
        printf("%s tiene %i \n",strtok(alumnos[i].nombre,"\n"),alumnos[i].edad);
    }
    getchar();
    return 0;
}
