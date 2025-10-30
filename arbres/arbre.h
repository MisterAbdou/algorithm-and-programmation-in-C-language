#ifndef ARBRE_H
#define ARBRE_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct noeud
{
     int val;
     struct noeud *sag;// sag :sous arbre a gauche
     struct noeud *sad;// sad sous arbre a droite
}Noeud;
typedef Noeud* Arbre;  
Arbre creer_noeud(int ,Arbre ,Arbre);
void aff_Prefix(Arbre);
void aff_Infixe(Arbre);
void aff_Postfixe(Arbre);
void aff_longeur(Arbre);
int rech(Arbre A,int x);
int rech_ABR(Arbre A,int x);
int hauteur(Arbre);//hauteur de l'arbre
int nbrNoeud(Arbre);// nombre de noeud de l'arbre
Arbre Inserer_Noeud(Arbre ,int ); //insertion 
Arbre Inserer_Noeud_ABR(Arbre ,int);
int maxABR(Arbre);//il suffit de parcourir a droite
int estfeuille(Arbre A);
int maxA(Arbre);
int estNoeudInterne(Arbre A);
Arbre detruireNoeud(Arbre A);
int nbrefeuillesInternes(Arbre A);
Arbre succ(Arbre A);
#endif
// quelle est la nature de l'element a supprimer ?
/*  
   Q: ou se trouve le sucesseur ?
     -il est dans le sous arbre de droite sad et il est dans ce sad le plus a gauche
     -il peut etre une feuille  ou il peut avoir uniquement un sad.
  Q:  ou se trouve le predecesseur?
     -il est dans le sag et il est dans ce sag le plus a droite
     -il peut etre une feuille ou il peut avoir uniquement un sag
*/