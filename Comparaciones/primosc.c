#include<stdio.h>
#include<time.h>

int main()
{
    int i,j,n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    start = clock();
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
    end = clock();
    cpu_time_used = (((double) (end - start)) / CLOCKS_PER_SEC)*1000;
    printf("Tomo %f milisegundos \n", cpu_time_used);
    return 0;
}