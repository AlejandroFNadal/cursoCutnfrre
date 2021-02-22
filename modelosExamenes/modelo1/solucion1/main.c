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
    struct nodo *sig;
};

typedef struct nodo nodo;


    
int cant_ventas;
//meses van del 0 al 11
int mes_mayor_ventas;
int mes_menor_ventas;

void print_mes(int val);
void add_lista(nodo *p);
void print_nodo(nodo *p);
void print_fecha(fecha f);
void print_lista();
//puntero al primer elemento
nodo *prim = NULL;

//tamanio de la lista
int tam = 0;
int main()
{
    char linea[20];
    int pos = 0;
    //pos 0 anio, pos 1 mes, pos 2 dia, pos 3 venta
    //Lee siempre y cuando no entre vacio
    int index = 0;
    fecha nuevaFecha;
    nodo *nuevoNodo = NULL;
    while(fgets(linea,15,stdin) != NULL)
    {
		printf("BOI\n");
		if(atoi(linea) != 0)
		{
			if(pos == 0)
			{
				printf("Pos 0 %d\n", atoi(linea));
				nuevoNodo = malloc(sizeof(nodo));
				nuevoNodo->indice = index;
				nuevaFecha.anio = atoi(linea);
			}
			if(pos == 1)
			{
				printf("Pos 1 %d\n",atoi(linea));
				nuevaFecha.mes = atoi(linea);
			}
			if(pos == 2)
			{
				printf("Pos 2 %d\n",atoi(linea));
				nuevaFecha.dia = atoi(linea);
			}
			if(pos == 3)
			{
				nuevoNodo->venta= atof(linea);
				printf("Pos 3 %f\n",nuevoNodo->venta);
				nuevoNodo->cuando = nuevaFecha;
				index++;
			}
			pos++;
			if(pos == 4)
			{
				pos = 0;	
			}
		}
		
			
		printf("eoi\n");	
    }
	printf("Llegue");
    print_lista();
	
}

void print_mes(int val)
{
    printf("%d",val+1);
}

//aniade un nodo al final de la lista
void add_lista(nodo *p)
{
	if(prim == NULL)
	{
		printf("Prim == NULL\n");
		prim = p;
	}
	else
	{
		nodo *aux = prim;
		while(aux->sig != NULL)
		{
		aux=aux->sig;
		}
		p->sig = NULL;
		aux->sig = p;
	}
	
    
}

void print_fecha(fecha f)
{
    printf("%d/%d/%d ",f.dia,f.mes,f.anio);
}
void print_nodo(nodo *p)
{
    printf("Pos: %d \n",p->indice);
    print_fecha(p->cuando);
    printf("Venta: %f\n",p->venta);
}
void print_lista()
{
    nodo *aux = prim;
    while(aux-> sig != NULL)
    {
	print_nodo(aux);
	aux = aux->sig;
    }
}
