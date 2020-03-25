#include <stdio.h>
 int main()
{
	int i,numero,contador;
	printf("Ingrese un numero y se imprimiran los primos anteriores al mismo :");
	scanf("%d",&numero);

	i=2;
	
	while (i<numero)
	{
		if (numero%i==0)
		{
		
		i++;
			
		}
		else
		{
			printf("%d \n",&i);
			i++;
		}
	}
	
  return 0;
}