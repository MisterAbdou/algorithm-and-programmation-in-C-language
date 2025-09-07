#include<stdio.h>
#include<stdlib.h>
int plus_grand(int tableau[])
{
      int i=0;
      int max,compteur;
      max=tableau[i];
      i++;
      while(i < 10){
          if(tableau[i] > max)
          {
                max=tableau[i];
                compteur=i;
          }
          i++;
      }
      return compteur;
}
int main()
{
    int tab[10];
    int i;
    for(i=0; i < 10 ; i++)
    {
         printf("T[%d]=",i);
         scanf("%d",&tab[i]);
    }
     printf(" l'indice du plus grand element est : %d\n",plus_grand(tab));
     return 0;
}