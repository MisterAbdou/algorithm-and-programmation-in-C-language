#include<stdio.h>
#include<stdlib.h>
const int nmax = 100;
int main ()
{
    int T[nmax];
    int N,compteur,i,premier_nb;
    do
    {
         printf("donner la taille du tableau :");
         scanf("%d",&N);
    }while(N<0 || N>nmax);
     premier_nb=2;
     compteur=0;
     while(compteur<N)
     {
         i=2;
         while((i <= (premier_nb/2)) && ((premier_nb % i) != 0))
         {
              i++;
         }
         if(i > (premier_nb/2))
         {
             T[compteur]=premier_nb;
             compteur++;
         }

         premier_nb++;
     }
     for(compteur=0;compteur < N; compteur++)
     {
         printf(" %d\t",T[compteur]);
     }
  return 0;
}


