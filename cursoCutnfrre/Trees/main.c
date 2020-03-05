#include "./trees.h"

int main()
{
    t_nodo P=crear_arbol();
    P->dato=3;
    
    printf("%d",P->dato);
    getchar();
return 0;
}