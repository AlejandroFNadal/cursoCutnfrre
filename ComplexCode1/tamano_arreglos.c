//La idea de este codigo es hacer algunas demostraciones de como se comporta 
//C respecto a los arreglos
#include <stdio.h>

int main()
{
    //este sector de codigo va a tirar valores basura, puesto que el tamanio del arreglo no esta definido
    int n;
    int array[3];
    printf("%d\n",sizeof(array));
    n=3;
    printf("%d\n",sizeof(array));
    
    return 0;

    
}