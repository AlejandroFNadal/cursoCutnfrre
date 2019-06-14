#include <stdio.h>
#include <stdlib.h>

struct clienteleido
	{
		int id;
		char ciudad[30];
		char pais[30];
	}lineaAux;

struct clienteleido retornalinea(char x[])
{
}
int main()
{
	FILE *puntarch;
	
	char linea[60];
	char aux1[6];
	char aux2[15];
	puntarch=fopen("corte.txt", "r");
	printf("Corte Control \n");
	fgets(linea,30,puntarch);
	printf("%s",linea);
	int n;
	while(linea[n] !=',')
	{
		aux1[n]=linea[n];
		n++;
	}
	n++;
	lineaAux.id=atoi(aux1);
	printf("%d",lineaAux.id);
	int k=0;
	while(linea[n] !=',')
        {
                lineaAux.ciudad[k]=linea[n];
                n++;
		k++;
        }
	lineaAux.ciudad[k]='\0';
	printf("%s",lineaAux.ciudad);
	k=0;
	n++;
        while(linea[n] !='\0')
        {
                lineaAux.pais[k]=linea[n];
                n++;
                k++;
        }
	lineaAux.pais[k]='\0';
	printf("%s",lineaAux.pais);
	getchar();
	fclose(puntarch);
	return 0;
}
