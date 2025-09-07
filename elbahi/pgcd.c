 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int dividente,diviseur,reste;
    do
    {
         printf("donner un nombre a:");
         scanf("%d",&a);
    }while(a<=0);
     do
    {
         printf("donner un nombre b:");
         scanf("%d",&b);
    }while(b<=0);
    if(a>b)
    {
         dividente=a;
         diviseur=b;
    }
    else
    {
         dividente=b;
         diviseur=a;
    }
    //calcul du pgcd par methode d'euclide
    while(dividente%diviseur!=0)
    {
         reste=dividente%diviseur;
         dividente=diviseur;
         diviseur=reste;
    }
    printf("le PGCD de %d et %d est :%d\n",a,b,diviseur);
   return 0;
}
