#include<stdio.h>
#include<stdlib.h>
const int nmax=100;
int main()
{
     char T[nmax];
     int n,tempo,i;

     do{
          printf("donner la taille du tableau:");
          scanf("%d",&n);
     }while( n < 0 || n > nmax);
//saisi du premier tableau
     for(i=0;i<n;i++)
     {
         printf("element %d:",i+1);
         scanf("%s",&T[i]);
     }
 // processus d'inversion
     i=0;tempo=0;
     while(i<(n-i))
     {
         tempo=T[i];
         T[i]=T[n-i-1];
         T[n-i-1]=tempo;
         i++;
     }
 //affichage du tableau inverse
     for(i=0;i<n;i++)
     {
        printf("[%c]",T[i]);
     }
     return 0;
}
