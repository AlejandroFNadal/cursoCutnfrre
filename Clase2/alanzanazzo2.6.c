#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char cadena[15];
    int longitud, i, x=0;
 
    printf("Ingrese su nombre: ");
    gets(cadena); // Guarda en la cadena lo que se ingrese por teclado //
    longitud = strlen(cadena);  // Obtengo la longitud del "string" //
    // Primero corrijo los blancos ' ' //
    while (cadena[x] != '\0')   // El "while" para controlar el fin de cadena //
    {
        if (cadena[x] == ' ')   // Identifico si hay un blanco //
        {
            for (i = x; i < longitud; i++)  // Si se encuentra un blanco, con un "for" recorro... //
            {                               // ...la cadena y reemplazo con el elemento siguiente i+1. //
                cadena[i] = cadena[i+1];    // También se mueven todos los elementos i+1, a la posición i //
            }                               // En consecuencia la longitud disminuye // 
            longitud--;
        }
        x++;
    }
    // Convierto todos los caracteres de la cadena a minúsculas //
    strlwr(cadena);
    // Luego el primer elemento (letra) la convierto a mayúscula //
    cadena[0] = toupper(cadena[0]);
 
    printf("\n\nHola ");
    puts(cadena);
    
    getchar();
    return 0;
}
