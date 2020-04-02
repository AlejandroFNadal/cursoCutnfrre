#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
     int flag = 0;
     int tam;
     int i = 0;
     char nom[50]="";
     printf("Ingrese su nombre: ");
     gets(nom);
     tam =strlen(nom);
     while(i<tam){
         if(!(isalpha(nom[i]))){
             flag = 1;
            }
           
         i++ ;   
         }   
     if(flag == 1){
         printf("su nombre no debe poseer números ni espacios en blanco, por favor vuelva a ingresarlo ");
     }else{
      
          if(islower(nom[0]) ){
                nom[0]=toupper(nom[0]);
            }
          printf("Su nombre es: %s",nom);
         }
      getchar();
      return 0 ; 
    }
