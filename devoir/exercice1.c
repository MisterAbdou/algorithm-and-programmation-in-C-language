#include<stdio.h>
#include<stdlib.h>
 void saisi(int t[],int n)
 {
    int i;
    for( i=0; i< n ;i++)
    {
         printf("T[%d]=",i+1);
         scanf("%d",&t[i]);
    }
 }
 void affichage( int t[],int n)
 {
       int i;
    for( i=0; i< n ;i++)
    {
         printf("[%d] ",t[i]);
    }
 }
 int maximum(int x[],int n)
 {
       int max;
       if(n==0)
         return x[0];
        else{
             max=maximum(x,n-1);
             if( max > x[n-1])
               return max; 
            else
               return x[n-1];
        }
}  

 void occurence(int t[],int n,int X)
 {
     int i,j,val;
     val=0;
     for(i=0;i< n;i++)
     {
         if(t[i]== X)
         {
             val++;
         }
     }
      printf(" le nombre %d est repete %d fois \n",X,val);
 }
 void nb_occurence(int t[],int n )
 {
      for(int i=0;i< n ;i++)
      {
          occurence(t,n,t[i]);
      }
 }
 int main()
 {
     int nombre;
     do{
         printf(" donner la taille du tableau :");
         scanf("%d",&nombre);
     }while(nombre <= 0);
     int tableau[nombre];
     saisi( tableau,nombre);
     printf(" affichage des elements du tableau\n ");
     affichage(tableau,nombre);
     int element;
      printf(" \ndonner un l'element a recherche : ");
      scanf("%d",&element);
      printf("NOMBRE D'OCCURENCE :\n");
      occurence(tableau,nombre,element);
      printf(" NOMBRE D'OCCURENCE POUR CHAGUE ELEMENT DU TABLEAU :\n");
      nb_occurence(tableau,nombre);
      return 0;
         printf(" le maximum est %d \n",maximum(tableau,nombre));
 }