#include<stdio.h>
#include<stdlib.h>
/* un pointeur  :c'est une variable contenant l'adresse d'une autre variable
     [VARIABLES]
     ma_variable :valeur de la variable
     &ma_variable :adresse  de la variable
     [POINTEURS]
     mon_pointeur:adresse de la variable pointee
     *mon_pointeur : valeur de la variable pointee
     &mon_pointeur : adresse du pointeur
      ces notations sont valables lorsqu'on est dans le code
     pour declarer et initialiser un pointeur ,on procedra comme suite:
     int *p=&nombreA;(ici le pointeur p va recuperer l'adresse de la variable nombreA)
     int *p=NULL (POUR initialiser un pointeur a valeur 0)
*/
void inverse(int *nombreA,int *nombreB)
{
      int tempo=0;
      tempo=*nombreA;
      *nombreA=*nombreB;
      *nombreB=tempo;
}
/* 
  On pouvait meme changer la maniere dont on a ecrit la fonction void 
  c'est a dire les arguments ( *nombreA ET *nombreB)  en mettant :int * const nombreA ,int * const nombreB 
  int * const nombreA: veut dire juste nombreA est une constante pointant un entier 
   
   Attention sur l'ecriture  on n'ecrit pas const int* nombreA

*/
int main()
{
    int a=15,b=28;
    int *pt_1=&a;
    int *pt_2=&b;
    printf("avant A=%d et B=%d\n",a,b);
    inverse(pt_1,pt_2);
    printf(" apres A=%d et B=%d\n",a,b);
    return 0;
}