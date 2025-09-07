#include<stdio.h>
#include<stdlib.h>
int somme_recursive( int nombre)
{
     if(nombre==0)
      return 0;
    else
      return nombre*(nombre+1)+somme_recursive(nombre-1);
}
int main()
{
     int nbr;
     printf("donner un nombre:");
     scanf("%d",&nbr);
     printf("la somme vaut:%d\n",somme_recursive(nbr));
     return 0;
}