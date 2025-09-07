#include<stdio.h>
#include"insertion.h"
#define nmax 100
int main()
{
    int n;
    do{
         printf("donner la taille du tableau avec 0 <= taille <100:");
         scanf("%d",&n);
    }while(n < 0 || n >= nmax);
    int t[nmax];
    int indice;
    for( indice = 0;indice < n ; indice++)
    {
           printf("element %d :",indice+1);
           scanf("%d",&t[indice]);
    }
     tr_insertion(t,n);
     affiche(t,n);
     return 0;
}