/* Marcelo Agoston */

#include <stdio.h>
#include <stdlib.h>

#define RESET_COLOR    "\x1b[0m"
#define ROJO_T     "\x1b[31m"
#define VERDE_T        "\x1b[32m"

int main(){
    float nota_examen;
    printf("Ingrese la nota de su examen \n");
    scanf("%f", &nota_examen);
    if(nota_examen>=6){
        printf(VERDE_T"¡¡FELICIDADES, APROBO SU EXAMEN!!"RESET_COLOR "\n");
    }else{
        printf(ROJO_T"Lo lamento =( ... nos vemos en el recuperatorio"RESET_COLOR "\n");
    }
    getchar();
return 0;
}