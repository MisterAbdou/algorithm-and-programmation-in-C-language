#include<stdio.h>
#include"trie_bulles.h"
#define nmax 100
int main()
{
     int tab[nmax];
     int n;
     do{
          printf("donner la taille  0<= taille< 100: ");
          scanf("%d",&n);
     }while(n < 0 || n >= nmax);
     int i;
     for(i = 0;i < n ;i++)
     {
          printf(" element %d: ",i+1);
          scanf("%d",&tab[i]);
     }
      trie_bulles(tab,n);
     affiche(tab,n);
     return 0;  
}