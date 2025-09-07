#include<stdio.h>
#include<stdlib.h>
void multiplication(int n)
{
     int i;
     for(i=1;i<= 10 ;i++)
     {
         printf("%d * %d = %d\n",i,n,i*n);
     }
}
void nb_premier(int n)
{
     int i=2;
     while( (i<( n/2) ) && (n % i != 0))
     {
         i++;
     }
     if(i<( n/2)){
          printf(" %d n'est pas premier !\n",n);
     }
     else{
           printf(" %d est premier !\n",n);
     }
}
int chiffre(int n)
{
      int rest,val=0;
      while(n != 0){
           val++;
           n/=10;
      }
     return val;
}


int main()
{
     int x;
     printf("donner le numero de la table que vous souhaitez calculez:");
     scanf("%d",&x);
     multiplication(x);
     int nombre;
      printf("donner un nombre :");
      scanf("%d",&nombre);
     nb_premier(nombre);
     printf("le nombre de chiffre du nombre  %d est egale a %d \n",nombre,chiffre(nombre));
     return 0;
}