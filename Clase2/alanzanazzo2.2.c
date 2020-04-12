#include <stdio.h>
int main(){
    int N, i, fact;
    printf("Ingrese un n%cmero para conocer el factorial: \n", 163);
    scanf("%d", &N);
    fact=1;
    for (i=N; i>0; i--) {
        fact = fact * i;
    }
    printf("\nEl resultado es: %d", fact);
    getchar();
    return 0;
}
