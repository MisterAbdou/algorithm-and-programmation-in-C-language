#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char chaine[30] ;

typedef struct etudiant{
     chaine nom;
     chaine prenom;
     float note;
     struct etudiant *suiv; 
}Etudiant;
typedef Etudiant *pEtudiant;
//il faut essayer de maitriser les prototypes de ces fonctions car en evaluation on n'aura pas besoin de les definir !!!!!!!!!!!
pEtudiant creer_maillon(chaine,chaine,float);
pEtudiant saisir_liste(short);
void afficher_liste(pEtudiant);
void afficher_liste_rec(pEtudiant);
pEtudiant inserer_tete(pEtudiant,chaine,chaine,float);
pEtudiant inserer_queue(pEtudiant,chaine,chaine,float);
pEtudiant inserer_position(pEtudiant,chaine,chaine,float,short);
pEtudiant supp_tete(pEtudiant);
pEtudiant supp_queue(pEtudiant);
pEtudiant supp_position(pEtudiant ,int);
int rech(pEtudiant,chaine);
pEtudiant detruire_maillon(pEtudiant);


