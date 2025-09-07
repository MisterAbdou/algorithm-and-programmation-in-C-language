#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct player
{
      signed char nom[256];
      int nombre_de_vie;
      int nombre_de_mort;
}joueur;// il faut savoir que le nouveau type cree est joueur
void creation_de_jeux( joueur *p)
{
     strcpy ((*p).nom,"ndiaye");
     (*p).nombre_de_vie=100;// (*p).nom <=> p->nom
     (*p).nombre_de_mort=150;
}
int main()
{
     joueur ma_variable;
     creation_de_jeux(&ma_variable);

     printf("Son nom est :%s\n",ma_variable.nom);
     printf(" pv:%d et pm :%d\n",ma_variable.nombre_de_vie,ma_variable.nombre_de_mort);
     return 0;
}