#include<stdio.h>
#include<stdlib.h>
#define nmax 100
int main()
{
     int T[nmax];
     int max,min,taille,x,i;
      do{
         printf("donner la taille du tableau:");
         scanf("%d",&taille);
      }while( (taille < 0)||( taille > nmax));
      
      for(i=0;i < taille;i++)
      {
         printf("element %d=",i+1);
         scanf("%d",&T[i]);
      }
     
     printf("donner l'element a chercher:");
     scanf("%d",&x);
    
     // on cherche si x est dans le tableau ou pas 
     i=0;
     while((i<taille) &&(T[i]!=x))
     {
        i++;
     }
     if(i<taille)
     {
         printf("%d est dans le tableau\n",x);
         if( T[i+1] > T[i-1])
         {
             max=T[i+1];
             min=T[i-1];
             printf("\n l'element immediatement superieur a %d est :%d et celui immediatement inferieur a %d est :%d.\n",x,max,x,min);
         }
         else
         {
             max=T[i-1];
             min=T[i+1];
             printf("\n l'element immediatement superieur a %d est :%d et celui immediatement inferieur a %d est :%d.\n",x,max,x,min);
         } 
      }
      else
      {
        printf("%d n'est pas dans le tableau!\n",x);
      }
      return 0;
}