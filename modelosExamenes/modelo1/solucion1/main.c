//Alejandro Nadal
//Ejercicio planteado como cola

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Variables globales

struct Fecha
{
    int anio;
    int mes;
    int dia;
};
typedef struct Fecha fecha;

struct nodo
{
    int indice;
    fecha cuando;
    float venta;
};

typedef struct nodo nodo;


    
int cant_ventas;
//meses van del 0 al 11
int mes_mayor_ventas;
int mes_menor_ventas;

void print_mes(int val);

//puntero al primer elemento
nodo *prim = NULL;

//tamanio de la lista
int tam = 0;
int main()
{
    char linea[6];
    int pos = 0;
    //pos 0 anio, pos 1 mes, pos 2 dia, pos 3 venta
    //Lee siempre y cuando no entre vacio
    int index = 0;
    while(fgets(linea,6,stdin) != NULL)
    {
	
	nodo *nuevoNodo = malloc(nodo) ;
	nuevoNodo->indice = index;
	//reiniciamos el evento
	if(pos == 4)
	    pos = 0;
	switch(pos)
	{
	case 0:
	    fecha nuevaFecha;
	    nuevaFecha.anio = atoi(linea);
	    break;
	case 1:
	    nuevaFecha.mes = atoi(linea);
	    break;
	case 2:
	    nuevaFecha.dia = atoi(linea);
	    break;
	case 3:
	    nuevoNodo->venta= atoi(strtok('$',linea));
	    break;
	}
	nuevoNodo->cuando = nuevaFecha;
	    
	   
	    
    }
	
}

void print_mes(int val)
{
    printf("%d",val+1);
}

void add_lista(nodo *p)
{
    while
