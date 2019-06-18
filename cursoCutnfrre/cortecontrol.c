#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct clienteleido
	{
		int id;
		char ciudad[50];
		char pais[50];
	}lineaAux;

struct clienteleido retornalinea(struct clienteleido nuevalinea,char x[])//recibe un string y lo distribuye en la estructura
{
	char aux1[7];
	int n=0;
	while(x[n] !=',')
	{
		aux1[n]=x[n];
		n++;
	}
	n++;
	nuevalinea.id=atoi(aux1);
	int k=0;
	while(x[n] !=',')
        {
                nuevalinea.ciudad[k]=x[n];
                n++;
		k++;
        }
	nuevalinea.ciudad[k]='\0';
	k=0;
	n++;
        while(x[n] !='\0')
        {
                nuevalinea.pais[k]=x[n];
                n++;
                k++;
        }
	nuevalinea.pais[k]='\0';
return nuevalinea;
}

void cortepais(FILE *p)
{
	char linea[60],aux[50],aux2[50];
	struct clienteleido tempo;
	fgets(linea,60,p);
	tempo=retornalinea(tempo,linea);
	strcpy(aux,tempo.pais);
	strcpy(aux2,tempo.ciudad);
	int cntpais=0;
	int cntciudad=0;
	int total=0;
	while(tempo.id != 0)//marca de fin
	{
		while(tempo.id != 0 && strcmp(tempo.pais,aux)==0)
		{
			while(tempo.id != 0 && strcmp(tempo.ciudad,aux2)==0)
			{
				printf("		|%19d\n",tempo.id);
				fgets(linea,30,p);
				tempo=retornalinea(tempo,linea);
				cntciudad++;
			}
			printf("|-------------------------------------------------\n");
			printf("		|Total ");
			for(int i=0;i<strlen(aux2);i++)
				printf("%c",aux2[i]);
			printf(" %d \n",cntciudad);
			cntpais=cntpais+cntciudad;
			cntciudad=0;
			strcpy(aux2,tempo.ciudad);
		}
		int i;
		printf("----------------------------------------------------\n");
		printf("	|Total ");
		for(i=0;i<strlen(aux)-2;i++)
			printf("%c",aux[i]);
		printf(": %d\n",cntpais);
		total=total+cntpais;
		cntpais=0;
		strcpy(aux,tempo.pais);
	}
	printf("Total %d",total);
}
int main()
{
	FILE *puntarch;
	
	puntarch=fopen("corte.txt", "r");
	if(puntarch==NULL)
	{
		printf("Error, archivo no encontrado");
		exit(0);
	}
	printf("Corte Control \n");
	cortepais(puntarch);
	getchar();
	fclose(puntarch);
	return 0;
}
 
