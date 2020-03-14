#include <stdio.h>

int main()
{
  //Aqui declaramos los elementos 
  float arreglo2[5]={2.5, 2.8, 3.1, 2.2, 5.4};

  int contador;
  for(contador = 0; contador <5; contador+=1)
  {
    printf("%f \n",arreglo2[contador]);
  }
  getchar();
  return 0;
}
