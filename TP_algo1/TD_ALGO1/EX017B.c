#include<stdio.h>
#include<stdlib.h>
#define nmax 100
int main()
{
    int T[nmax];
    int i,taille,val,min,max;
    do
    {
         printf("donner la taille du tableau:");
         scanf("%d",&taille);
    }while(taille >nmax);

    for(i=0;i<taille;i++)
    {
         printf("element %d=",i+1);
         scanf("%d",&T[i]);
    }
    
     printf("donner l'element %c rechercher:",133);
     scanf("%d",&val);
     min=val;
     max=val;
     i=0;
     while(i<taille && T[i] != val)
     {
        i++;
     }
     if(i<taille)
     {
        if(T[i] > max)
        {
             max=T[i+1];
             min=T[i-1];
             printf("le max est %d et le minim est %d .",max,min);
        }
        else
        {
          min=T[i-1];
          max=T[i+1];
         printf("le max est %d et le minim est %d .",max,min);
        } 
     }
     else
     {
        printf(" op desole l'element ne se trouve pas dans le tableau! ");
     }
     return 0;
}