#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../listechaine/listechainee.h"
typedef char chaine[30] ;
typedef struct etu2{
     chaine nom;
     chaine prenom;
     float note;
     struct etu2*suiv; 
     struct etu2 *preced;
}Etu2;
typedef Etu2*pEtu2;
//il faut essayer de maitriser les prototypes de ces fonctions car en evaluation on n'aura pas besoin de les definir !!!!!!!!!!!
pEtu2 creer_maillon_bis(chaine,chaine,float);
pEtu2 saisir_liste_bis(short);
void afficher_liste_bis(pEtu2);
pEtu2 inserer_tete_bis(pEtu2,chaine,chaine,float);
pEtu2 inserer_queue_bis(pEtu2,chaine,chaine,float);
pEtu2 inserer_position_bis(pEtu2,chaine,chaine,float,short);
pEtu2 supp_tete_bis(pEtu2);
pEtu2 supp_queue_bis(pEtu2);
pEtu2 supp_position_bis(pEtu2 ,int);
pEtu2  supp_liste_bis(pEtu2);
pEtu2 detruire_maillon_bis(pEtu2);


