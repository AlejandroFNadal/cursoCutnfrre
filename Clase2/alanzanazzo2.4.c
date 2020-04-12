#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int i = 1; 
    int N;
    int primo = 2;
    int aux = 2;
    bool flag = false;
 
    printf("En este programa puede conocer cu%cles son los primeros N n%cmeros primos. \n", 160, 163);
    printf("\n Ingrese la cantidad que desea saber: ");
    scanf("%d", &N);
    printf("\n"); printf("\n");
    printf("Los primeros %d n%cmeros primos son: ", N, 163);
    printf("\n");
    printf("     -     %d \n     -     ", primo);
    primo++;
    while (i != N)
    {
        while (primo / aux >= aux && !flag)
        {
            if (primo % aux == 0)
            {
                flag = true;
            }
            aux++;
        }
        if (!flag)
        {
            printf("%d \n     -     ", primo);
            i++;
        }
        primo++;
        aux = 2;
        flag = false;
    }
}
