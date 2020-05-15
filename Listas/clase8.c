#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int valor;
    struct nodo *sig;
    struct nodo *ant;

} nodo;

typedef nodo *puntero;

void agregarElemento(nodo *cabeza,nodo *cola);

void borrarElemento(nodo *cabeza,nodo *cola);

void imprimirLista(nodo *cabeza);

void imprimirListaRevez(nodo *cola);

int main(){
    int valor,opcion;
    puntero cabeza = NULL;
    puntero cola=NULL;
    puntero aux = NULL;
    
    cabeza = malloc(sizeof(nodo));    
    cabeza->valor=1;
    cabeza->sig=NULL;
    cabeza->ant=NULL;
    cola=cabeza;
    aux=cabeza;

    for (int i = 0; i < 20; ++i)
    {
      i=i+2;
      puntero nuevo;
      nuevo = malloc(sizeof(nodo));
      nuevo->valor=i;
      nuevo->ant=aux;
      nuevo->sig=NULL;
      aux->sig=nuevo;
      aux=nuevo;
      cola=nuevo;
    }
    aux=cabeza;
    
    opcion=1;
    while (opcion!=0){
      printf("Ingrese opcion\n");
      scanf("%d",&opcion); 
      switch(opcion) {
        case (1)  :
          agregarElemento(cabeza,cola);
          break;
        case (2) :
          borrarElemento(cabeza,cola);
          break;
        case (3):
          imprimirLista(cabeza);
          break; 
        case (4):
          imprimirListaRevez(cola);
          break;
      }
    }
}


void agregarElemento(nodo *cabeza,nodo *cola)
{
  int a;
  puntero aux;
  aux=NULL;
  aux=cabeza;
  printf("Ingrese numero a agregar\n");
  scanf("%d",&a);

  while (((aux->sig) != NULL) && ((a) > ((aux->sig)->valor)))
  {
    aux=aux->sig;
  }

  if (aux->sig == NULL)
  {
    puntero nuevo;
    nuevo=malloc(sizeof(nodo));
    nuevo->valor=a;
    nuevo->ant=aux;
    nuevo->sig=NULL;
    aux->sig=nuevo;
  }
  else
  {
    puntero nuevo;
    nuevo = malloc(sizeof(nodo));
    nuevo->valor=a;
    nuevo->ant=aux;
    nuevo->sig=aux->sig;
    (aux->sig)->ant=nuevo;
    aux->sig=nuevo; 
  }
}

void borrarElemento(nodo *cabeza,nodo *cola)
{
  int a;
  puntero aux;
  aux=NULL;
  aux=cabeza;

  printf("Ingrese numero a eliminar\n");
  scanf("%d",&a); 
  while ((aux->sig != NULL) && (aux->valor != a))
  {
    aux=aux->sig;
  }
  if ((aux->sig != NULL) && (aux->valor != a))
  {
    return;
  }
  else
  {
    if ((aux->sig) == NULL)
    {
      cola=aux->sig;
      (aux->ant)->sig=NULL;
      free(aux);
    }
    else
    {
      (aux->ant)->sig=aux->sig;
      (aux->sig)->ant=aux->ant;
      free(aux); 
    }
  }
}

void imprimirLista(nodo *cabeza)
{
    printf("Listado de elementos:\n");
    puntero aux;
    aux=NULL;
    aux=cabeza;
    while(aux->sig != NULL)
    {
        printf("%d \n",aux->valor);
        aux = aux->sig;
    }
    printf("%d \n",aux->valor);
}

void imprimirListaRevez(nodo *cola)
{
    printf("Listado de elementos:\n");
    puntero aux;
    aux=NULL;
    aux=cola;
    while(aux->ant != NULL)
    {
        printf("%d \n",aux->valor);
        aux = aux->ant;
    }
    printf("%d \n",aux->valor);
}