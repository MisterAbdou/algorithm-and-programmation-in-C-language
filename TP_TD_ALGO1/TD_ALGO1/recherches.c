#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    //chercher un element x dans un tableau de 10 colonnes et une ligne
     int x,i;
     int T[N];
     do
     { 
         printf("donner la valeur chercher dans le tableau :");
         scanf("%d",&x);
     }while(x<0);
     for(i=0;i<N;i++)
     {
         printf(" element [%d]=",i+1);
         scanf("%d",&T[i]);
         printf("\n");
     }
     while((i <= N) && (T[i] != x))
     {
         i++;
     }
     if(i<=N)
     {
         printf("trouver\n");
     }
     else
     {
         printf("op! %d non trouver",x);
     }
 return 0;
}