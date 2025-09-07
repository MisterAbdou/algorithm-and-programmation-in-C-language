#include<stdio.h>
#include<stdlib.h>
int somme_premiers_entiers(int n)
{
     int i,s;
     s=0;
     for(i=1;i<=n;i++)
     {
        s+=i;
     }
    return s;
}
int produit(int x,int z)
{
      return x*z;
}
int main()
{
     int nombre;
     int b;
     printf("donner un nombre n et b:");
     scanf("%d",&nombre);
     scanf("%d",&b);
    //  appel a la fonction
     printf("la somme des %d  premier entiers est:%d\n",nombre,somme_premiers_entiers(nombre));
     printf("le produit est egale a:%d\n",produit(nombre,b));
     
     return 0;
}
