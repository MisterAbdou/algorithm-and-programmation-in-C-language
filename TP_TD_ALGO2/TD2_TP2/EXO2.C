#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// methode iterative
int somme_p_entier( int n)
{
       int i,somme=0;
       for(i=1;i<=n;i++)
       {
           somme+=pow(i,5);
       }
       return somme;
}
// methode recursive
int puissance(int n)
{
    if(n==0)
        return 0;
    else
    {
        return (n*n*n*n*n+puissance(n-1));
    }
     
}
int main()
{
    int nombre;
    do
    {
         printf("donner un nombre:");
         scanf("%d",&nombre);
     }while(nombre <= 0);
      printf("....methode iterative....\n");
      printf("la somme des %d premiers entiers naturels a la puissance 5 est egale a = %d\n",nombre,somme_p_entier(nombre));
      printf("....methode recursive....");
    printf("la somme des %d premiers entiers naturels a la puissance 5 est egale a = %d\n",nombre,puissance(nombre));
}