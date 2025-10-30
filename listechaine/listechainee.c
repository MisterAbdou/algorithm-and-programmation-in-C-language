#include"listechainee.h"
// ============================================
pEtudiant creer_maillon(chaine nom,chaine prenom,float note){
         pEtudiant etud;
         etud=(pEtudiant)malloc(sizeof(Etudiant));
         strcpy(etud->nom,nom);
         strcpy(etud->prenom,prenom);
         etud->note=note;
         etud->suiv=NULL;
        return etud;
}
// =====================================================================
pEtudiant saisir_liste(short n){
     if(n >= 1){
         pEtudiant l,etud,courant;
         chaine nom,prenom;
         float note;
         printf("Donner les infos du premier etudiant(nom,prenom,note):");
         gets(nom);
         gets(prenom);
         scanf("%f",&note);
         getchar();//pour gerer le tampon
         etud=creer_maillon(nom,prenom,note);
          courant=l=etud;
         for(int i=1; i < n ;i++){
              printf("Donner les infos de l'etudiant suivant (nom,prenom,note):");
              gets(nom);
              gets(prenom);
              scanf("%f",&note);
              getchar();//pour gerer le tampon
              etud=creer_maillon(nom,prenom,note);
              courant->suiv=etud;
              courant=courant->suiv;
         }
          return l;
     }
     else 
          return NULL;
}
// ===================================================================
void afficher_liste(pEtudiant l){
      if(l != NULL){
          pEtudiant courant=l;
          while(courant->suiv != NULL){
                printf("%s %s %f",courant->nom,courant->prenom,courant->note);
                courant=courant->suiv;
          }
      }
}
// =====================================================================
void afficher_liste_rec(pEtudiant l){
       if(l->suiv !=NULL){
           printf("%s %s %f",l->nom,l->prenom,l->note);
           afficher_liste_rec(l->suiv);
       }else
           return;
}
// =================================================================
pEtudiant inserer_tete(pEtudiant l,chaine nom,chaine prenom,float note){
      pEtudiant etud;
      etud=creer_maillon(nom,prenom,note);
      if(l==NULL)
         l=etud;
      else{
        etud->suiv=l;
        l=etud;
      }
       return l;
}
// =====================================================================
pEtudiant inserer_queue(pEtudiant l,chaine nom ,chaine prenom,float note){
     pEtudiant etud,courant;
     etud=creer_maillon(nom,prenom,note);
     if(l==NULL)
        l=etud;
      else{
          if(l->suiv ==NULL)
               l->suiv=etud;
          else{
             courant=l;
             while(courant->suiv !=NULL)
              courant=courant->suiv;
              courant->suiv=etud;
          }
     }
     return l;
}
// ======================================================================================
pEtudiant inserer_position(pEtudiant l,chaine nom,chaine prenom,float note,short pos){
     pEtudiant courant=l,etud,preced;
     int i=1;
     etud=creer_maillon(nom,prenom,note);
      if( l== NULL)
          l=etud;
     while (courant !=NULL && i<pos ){
          preced=courant;
          courant=courant->suiv;
          i++;
     }
     if(courant){
          
          preced->suiv=etud;
          etud->suiv=courant->suiv;
     }
      return l;
}
// =============================================
pEtudiant supp_tete(pEtudiant l){
     pEtudiant m;
     if(l != NULL){
         m=l;
         l=l->suiv;
         m=detruire_maillon(m);
     }
     return l;
}
// ================================================
pEtudiant supp_queue(pEtudiant l){
         if(l->suiv == NULL){
             l=detruire_maillon(l);
             l=NULL;
         }else{
               pEtudiant preced,courant=l;
                preced=NULL;
               while(courant->suiv != NULL){
                     preced=courant;
                     courant=courant->suiv;
               }
                preced->suiv=NULL;
                courant=detruire_maillon(courant);
         }
      return l;
}
// ===============================================
pEtudiant supp_position(pEtudiant l,int x ){
       pEtudiant cour=l,preced=NULL;
        int i=1;
        while(cour !=NULL && i<x ){
                preced=cour;
               cour=cour->suiv;
               i++;
        }
        if( ( cour != NULL)&& (i=x)){
              preced->suiv=cour->suiv;
              cour=detruire_maillon(cour);
        }
        return l;
}
// =======================================================
int rech(pEtudiant l,chaine nom){
      pEtudiant courant=l;
       while(courant != NULL && strcmp(courant->nom,nom) != 0)
            courant=courant->suiv;
         if(courant !=NULL)
             return 1;
        else
            return 0;
}
// =============================================================
pEtudiant detruire_maillon(pEtudiant l){
       free(l);
       l=NULL;
       return l;
}


