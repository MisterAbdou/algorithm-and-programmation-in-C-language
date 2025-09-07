#include<stdio.h>
#include<stdlib.h>
const int nmax = 100;
int main()
{
    int T[nmax];
    int max2,max1,i,taille,nombre;
    do
    {
         printf("donner la taille du tableau:");
         scanf("%d",&taille);
    }while(taille<0 || taille > nmax);
    i=0;
     printf("element %d:",i);
     scanf("%d",&T[i]);
     max1=T[i];
     max2=T[i];
     i=1;
     while(i<taille)
     {
         printf("element %d: ",i);
         scanf("%d",&T[i]);
         if(max1 <T[i])
         {
             max2=max1;
             max1=T[i];
         }
         else
         {
             if(T[i]> max2)
             {
                max2=T[i];
             }
         }
       i++;
     }
     printf("le plus grand c'est %d\n",max1);
     printf("le deuxieme le plus grand c'est %d",max2);
     return 0;
}