#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
   int age;
   char sexe;
   bool feminin=1 ,masculin=1;
   printf("donner le sexe du parisien:");
   scanf("%s",&sexe);
   printf(" donner l'age du parisien:");
   scanf("%d",&age);
   // testement pour le parisen
   if(masculin)
    { 
       if(age>20)
       {
         printf(" le parisien est imposable");
       }
       else
       {
        printf(" le parisien est non imposable");
       } 
    }
  // testement pour la parisienne
     if(feminin)
      {
        if((age>18)&&(age<35))   
        {
         printf("la parisienne est imposable");
        }  
        else
        {
          printf(" la parisienne est non impossable");
        } 
      }
   return 0;
 }








