
#include <stdio.h>
#include <stdlib.h>

/*Primero creamos un nuevo tipo, t_node*/


struct nodo{
    int dato;
    struct nodo* izq;
    struct nodo* der;
};
typedef struct nodo* t_nodo;

/*Funcion que crea la raiz del nodo*/

t_nodo crear_arbol()
{
    t_nodo raiz = NULL;
    raiz = (t_nodo)malloc(sizeof(t_nodo));
    return raiz;
}
t_nodo crear_der(t_nodo padre)
{
    printf("Crear Derecha\n");
    t_nodo dr=(t_nodo)malloc(sizeof(t_nodo));
    padre->der=dr;
    return padre->der;
}
t_nodo crear_izq(t_nodo padre)
{
    t_nodo iz=(t_nodo)malloc(sizeof(t_nodo));
    printf("Crear Izquierda\n");
    padre->izq=iz;
    return padre->izq;  
}

void anadir_datos(t_nodo contenedor,int datos)
{
    contenedor->dato=datos;
}

void rellenar_preorden(t_nodo raiz,int level,int numlevels)
{
    //numlevels nos dira el numero de niveles que debe tener el arbol
    //asignamos el valor al nodo
    if(level<numlevels)
    {
        raiz->dato=level;
        level+=1;
        //creamos el nodo hijo de la izquierda
        t_nodo izq=crear_izq(raiz);
        rellenar_preorden(izq,level,numlevels);
        t_nodo der=crear_der(raiz);
        rellenar_preorden(der,level,numlevels);
    }
}