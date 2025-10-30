#include<stdio.h>
#include<stdlib.h>
#define nmax 100
int main()
{
     int T1[nmax];
     int  T2[nmax];
     int taille,i,j;
     do{
         printf("donner la taille du tableau:");
         scanf("%d",&taille);
    }while(taille > nmax);

     printf("remplissage du tableau:\n");
    for(i=0;i<taille;i++)
    {
        printf("[%d]=",i+1);
        scanf("%d",&T1[i]);
    }

     printf("tableau des positions paires:\n");
     i=0;j=0;
     while(i<taille)
    {

             if(i%2==0)
             {
                 T2[j]=T1[i];
                 printf(" [%d]",T2[j]);
              }
         i++;
    }
     printf("\n tableau pour les positions impaires:\n");
    for(i=0;i<taille;i++)
    {
         if((i%2)!=0){
         printf("[%d] ",T1[i]);
         }
    }
    return 0;
}

