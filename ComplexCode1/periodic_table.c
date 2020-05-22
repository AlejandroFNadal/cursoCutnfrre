/* Coded by Alejandro Nadal, task for Coursera Course "C for everyone, Structured programming", Week 3.*/

/*this code is supposed to let you load the name, symbol and atomic weight of 10 elements and then show them in a proper way*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//change this to get more elements from the periodic table. I am currently using an input file to test
#define NUMBER_ELEMENTS 10

//each atom info

struct elem{
    char name[14];
    char symbol[3];
    float weight;
};

typedef struct elem elem;

//node of list
struct node{
    elem info;
    struct node *next;
};

typedef struct node node;

void node_loader(node *p); //loads the element
void node_print(node *p); //prints the element

int main()
{
    node *head = NULL;
    node *point = NULL;
    int i;
    head = malloc(sizeof(node));
    point = head;
    for(i = 0; i < NUMBER_ELEMENTS; i++)
    {
         node_loader(point);
         if(i < NUMBER_ELEMENTS -1)
         {
             point->next = malloc(sizeof(node));
         }
         point = point->next;
    }

    //print all the elements
    point = head;

    //header of table
    printf("\n\nAtomic Elements\n");
    printf("______________________________\n");
    printf("|%10s | %4s|%9s|\n","Name","Symbol","Weight");
    while(point != NULL)
    {
        //printf("%s \n",point->info.name);
        node_print(point);
        point = point->next;
    }
    printf("______________________________\n");
    return 0;
}

void node_loader(node *p)
{
    printf("\nWrite down the name of the element\n");
    fgets(p->info.name,14,stdin);
    printf("Write down the symbol of the element\n");
    fgets(p->info.symbol,3,stdin);
    printf("Write down the atomic weight of the element: ");
    scanf("%f",&p->info.weight);

    getchar();//solves issue with trailing carriage returns
    p->next=NULL;
    
}
//strtok eliminates the new line symbol throught tokenizing
//The output here is made through careful length measuring through the length modifiers in printf
void node_print(node *p)
{
    printf("|%10s | %5s |%9.4f| \n",strtok(p->info.name,"\n"), strtok(p->info.symbol,"\n"), p->info.weight);
}