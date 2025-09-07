#include<stdio.h>
#include<stdlib.h>
void somme_element(int t[],int taille,int *somme)
{
     *somme=0;
     int i;
     int *p;
     p=t;
     for(i=0;i<taille;i++)
     {
         *somme =*somme + *(p+i);
     }
}
int main()
{
    int tableau[100];
    int i,s;
     for(i=0;i<6;i++)
     {
         printf("T[%d]=",i+1);
         scanf("%d",&tableau[i]);
     }
     somme_element(tableau,6,&s);
     printf("la somme des elements du tableau vaut:%d",s);
     return 0;
}