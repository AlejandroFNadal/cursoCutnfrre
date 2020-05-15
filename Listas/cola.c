#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{ //snodo es el nombre de la estructura
	int valor;
	struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
}tnodo; //tnodo es el tipo de dato para declarar la estructura
 
typedef tnodo *tpuntero; //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 
void insertarEnLista (tpuntero aux, int e);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);
 
int main(){
	int e;
	tpuntero cabeza; //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
	cabeza = NULL; //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
	tpuntero aux = NULL;

	printf("Ingrese elementos, -1 para terminar: ");
	scanf("%d",&e);
	cabeza = malloc(sizeof(tnodo));
	cabeza->valor = e;
	cabeza->sig = NULL;
	aux = cabeza;
	
	while(e!=-1){
		
		printf ("Ingresado correctamente");
		printf ("\n");
		printf("Ingrese elementos, -1 para terminar: ");
		scanf("%d",&e);
		if(e != -1){
			insertarEnLista(aux, e);
			aux = aux->sig;
		}
	}
	 
	printf ("\nSe imprime la lista cargada: ");
	imprimirLista (cabeza);
	 
	printf ("\nSe borra la lista cargada\n");
	borrarLista (&cabeza);
	 
	
	 
return 0;
}
 

void insertarEnLista (tpuntero aux, int e){
	tpuntero nuevo;
	nuevo = malloc(sizeof(tnodo));
	nuevo->valor = e;
	nuevo->sig = NULL;
	aux->sig = nuevo;
	
}

void imprimirLista(tpuntero cabeza){
	while(cabeza != NULL){ //Mientras cabeza no sea NULL
		printf("%4d",cabeza->valor); //Imprimimos el valor del nodo
		cabeza = cabeza->sig; //Pasamos al siguiente nodo
	}
}
 
void borrarLista(tpuntero *cabeza){ 
	tpuntero actual; //Puntero auxiliar para eliminar correctamente la lista
  
	while(*cabeza != NULL){ //Mientras cabeza no sea NULL
		actual = *cabeza; //Actual toma el valor de cabeza
		*cabeza = (*cabeza)->sig; //Cabeza avanza 1 posicion en la lista
		free(actual); //Se libera la memoria de la posicion de Actual (el primer nodo), y cabeza queda apuntando al que ahora es el primero
	}
}
