#include<stdio.h>
#include<stdlib.h>
void affiche(int n)
{
    if(n==0)
         printf("%d\t",n);
    else{
         affiche(n-1);
         printf("%d\t",n);}
}
int somme(int n)
{
     if(n==1)
         return 1;
     return n+somme(n-1);
}
int main()
{
     int nombre;
     int x;
     printf("donner un nombre :");
     scanf("%d",&nombre);
      x=somme(nombre);
      affiche(nombre);
      printf("\n la somme vaut :%d\n",x);
     return 0;
}