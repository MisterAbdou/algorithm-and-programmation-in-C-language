#ifndef PILE_H
#define PILE_H
#include"../FILE/file.h"
typedef struct 
{
    pEtudiant sommet;
    int taille;
}PileEtudiant;
int pilevide(PileEtudiant);
PileEtudiant empiler(PileEtudiant,chaine,chaine,float);
PileEtudiant desempiler(PileEtudiant);
pEtudiant Sommet(PileEtudiant);
PileEtudiant initpile(PileEtudiant);
PileEtudiant tfp(fileEtudiant);//transfert file vers pile
PileEtudiant tpf(PileEtudiant);//transfert pile vers file
#endif

