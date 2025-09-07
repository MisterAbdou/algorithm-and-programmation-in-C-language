#include<stdio.h>
#include<stdlib.h>
// Exercice: placer la valeur 1 dans chacun des 10 elements  du tableau  em utilisant un pointeur et afficher les 
int main()
{
     int tableau[10];
     int * pointeur;
     int i;
     for( pointeur = tableau , i = 0 ;  i < 10 ;i++ , pointeur++)
     {
              *pointeur = 1 ;/* Affectation a la valeur 1 dans chaque element du tab*/
              printf(" T[%d] = %d \n ",i,*(pointeur));
     }
     return 0;

}