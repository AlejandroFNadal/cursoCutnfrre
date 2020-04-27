#include <stdio.h>
#include <stdlib.h>
//Task 4 for C for Everyone Course, in Coursera
//Made by Alejandro Nadal
//It loads a set of rational numbers from a txt file
//then it gets the average of them all

//this code assumes that the next format is respected in the file

//numberofrationals numerator denominator numerator denominator... 
//If the file does not comply with this structure, this program will fail. 


struct rational{
    int num;
    int dem;
};

typedef struct rational rational;

void sum_R(rational,rational,rational*);
void sus_R(rational,rational,rational*);
void mul_R(rational,rational,rational*);
void div_R(rational,rational,rational*);

void simplify(rational*);

void pri_R(rational);

int main(int argc, char *argv[])
{
    FILE *fp;
    if(argc < 2)
    {
        printf("Error, you have not inserted a file");
    }
    else
    {
        fp=fopen(argv[1],"r");
        if(fp != NULL)
        {
            int value;
            rational set_of_values[value];
            fscanf(fp,"%d",&value);
            printf("Number of rationals: %d\n",value);
            int c;
            //Inserting all the values from file
            for(c = 0; c < value;c++)
            {
                fscanf(fp,"%d",&set_of_values[c].num);
                fscanf(fp,"%d",&set_of_values[c].dem);
            }   

            //print all values
            for(c=0;c<value;c++)
            {
                printf("%d / %d\n",set_of_values[c].num,set_of_values[c].dem);
            } 
            // Now lets do the sum
            rational resultado;
            resultado.num=set_of_values[0].num;
            resultado.dem=set_of_values[0].dem;
            for(c=1;c< value;c++)
            {
                sum_R(resultado,set_of_values[c],&resultado);
            }
            //divide by number of values
            rational divisor;
            divisor.num=value;
            divisor.dem=1;
            //div_R(resultado,divisor,resultado);
            
            //we show the result

            printf("%d / %d", resultado.num,resultado.dem);

            fclose(fp);
        }
        else
        {
            printf("Cannot find file");
        }
        
        
    }
    
    
}

int gcd(int a, int b) // greater common divisor, classic euclides algorithm
{
    if(b==0)
    {
        return a;
    }
    else
    {
        gcd(b, a % b);
    }
    
}
void simplify(rational *val)
{
    //first find biggest common divisor
    int divisor = gcd(val->num,val->dem);
    val->num = val->num / divisor;
    val->dem = val-> dem / divisor;

}
void sum_R(rational a,rational b, rational *resul)
{
     if(a.dem == 0 || b.dem == 0)
     {
         printf("Impossible value. Operation not allowed. Dividing by 0\n");
     }
     else{
        resul->dem = a.dem * b.dem;
        resul->num = a.num * b.dem + b.num * a.dem;
     }
    simplify(resul); 
}

void sust_R(rational a,rational b, rational *resul)
{
    if(a.dem == 0 || b.dem == 0)
    {
        printf("Impossible value. Operation not allowed. Dividing by 0\n");
    }
    else{
        resul->dem = a.dem * b.dem;
        resul->num = a.num * b.dem - b.num * a.dem;
    }
}

void mul_R(rational a,rational b, rational *resul)
{
    if(a.dem == 0 || b.dem == 0)
    {
        printf("Impossible value. Operation not allowed. Dividing by 0\n");
    }
    else
    {
        resul->dem = a.dem * b.dem;
        resul->num = a.num * b.num;
    }
}

void div_R(rational a,rational b, rational *resul)
{
    if(a.dem == 0 || b.dem == 0)
    {
        printf("Impossible value. Operation not allowed. Dividing by 0\n");
    }
    else{
        resul->dem = a.dem * b.num;
        resul->num = a.num * b.dem;
    }
}

void pri_R(rational val)
{
    printf("%d / %d \n",val.num,val.dem);
}