#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comparador(char s1[],char s2[])
{
	if(strlen(s1)!=strlen(s2))
	{
		return 0;
	}
	else
	{
		int n=0;
		while(n<strlen(s1)-1)
		{
			if(s1[n]!=s2[n])
				return 0;
			n++;
		}
	}
return 1;
}
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
	char linea[60],aux[50];
	struct clienteleido tempo;
	fgets(linea,60,p);
	tempo=retornalinea(tempo,linea);
	strcpy(aux,tempo.pais);
	int cntpais=0;
	while(tempo.id != 0)//marca de fin
	{
		while(tempo.id != 0 && strcmp(tempo.pais,aux)==0)
		{
			printf("%8d\n",tempo.id);
			fgets(linea,30,p);
			tempo=retornalinea(tempo,linea);
			cntpais++;
		}
		printf("%s %d\n",aux,cntpais);
		cntpais=0;
		strcpy(aux,tempo.pais);
	}
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
 
