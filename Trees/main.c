#include "./trees.h"

int main()
{
    t_nodo P=crear_arbol();
    rellenar_preorden(P,0,2);
    printf("%d",P->dato);
    printf("%d",P->izq->dato);
    getchar();
return 0;
}