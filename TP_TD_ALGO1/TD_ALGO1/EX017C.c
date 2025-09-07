#include<stdio.h>
#include<stdlib.h>
#define nmax 100
int main()
{
     int T[nmax];
     int note,max,max2,i,taille;
     do
     {  
         printf("donner la taille du tableau:");
         scanf("%d",&taille);
     }while( taille > nmax);
     
     do{
         printf("donner la note de l'etudiant  n 1:");
         scanf("%d",&note);
     }while(((note <0 )|| (note > 20)) && (note !=-1));

     i=0;
     T[i]=note;
     max=T[i];
     while((note != -1) && i < taille-1)
     {
         do
         {
             printf("donner la note de l'autre etudiant n %d:",i+2);
             scanf("%d",&note);
         }while(((note <0 )|| (note > 20)) && (note !=-1));
         
         T[i+1]=note;
         if(note != -1)
         {
             if(T[i+1] > max)
             {
                 max=T[i+1];
                 max2=T[i];
             }
             else
             {
                 max=max;
                max2=T[i-1];
             }
         }
         i++;
     }
     if(max !=-1)
     printf("la meilleur note c'est :%d et la deuxieme c'est %d.",max,max2);
     return 0;
}
