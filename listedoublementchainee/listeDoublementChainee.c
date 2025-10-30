#include"listeDoublementChainee.h"
pEtu2 creer_maillon_bis(chaine nom,chaine prenom ,float note){
       pEtu2 noeud=(pEtu2)malloc(sizeof(Etu2));
       if( noeud != NULL){
             strcpy(noeud->nom,nom);
             strcpy(noeud->prenom,prenom);
             noeud->note=note;
             noeud->preced=NULL;
             noeud->suiv=NULL;
       }
      return noeud;
}
pEtu2 saisir_liste_bis(short n){
     pEtu2 l,courant,maillon;
     chaine nom, prenom;
     float note;
     printf("donner le nom ,prenom et note\n");
     gets(nom);
     gets(prenom);
     scanf("%f",&note);
     maillon=creer_maillon(nom,prenom,note);
     l=courant=maillon;
     for(int i=1; i < n;i++){
         printf("donner le nom ,prenom et note\n");
         gets(nom);
         gets(prenom);
         scanf("%f",&note);
         maillon=creer_maillon(nom,prenom,note);
         maillon->preced=courant;
         courant->suiv=maillon;
         courant=maillon;
     }
      return l;
}
void afficher_liste_bis(pEtu2 l){
        pEtu2 courant=l;
        while (courant->suiv != NULL)
        {
               printf("%s %s %f ",courant->nom,courant->prenom,courant->note);
                courant=courant->suiv;
        }
        while( courant !=NULL){
              printf("%s %s %f ",courant->nom,courant->prenom,courant->note);
              courant=courant->preced;
        }
}
pEtu2 inserer_tete_bis(pEtu2 l,chaine nom ,chaine prenom,float  note){
         pEtu2 nouveau;
         nouveau=creer_maillon(nom,prenom,note);
         if(l==NULL)
               l=nouveau;
         else{
              l->preced=nouveau;
              nouveau->suiv=l;
              l=nouveau;
         }
       return l;
}
// une fonction qui reunit deux liste doublement chainee
// une fonction qui supprime ou ajoute n'importe ou 
pEtu2 inserer_queue_bis(pEtu2 l,chaine nom,chaine prenom,float note){
             pEtu2 nouveau,courant;
             nouveau=creer_maillon(nom,prenom,note);
             if( l ==NULL)
                 l=nouveau;
             else{
                 courant=l;
                 while (courant->suiv != NULL){
                        courant=courant->suiv;
                 }
                 courant->suiv=nouveau;
                 nouveau->preced=courant;
                 nouveau->suiv=NULL;
             }
          return l;
}
pEtu2 inserer_position_bis(pEtu2 l,chaine nom,chaine prenom ,float note ,short pos){
         pEtu2 courant,nouveau,tempo;
         nouveau=creer_maillon(nom,prenom,note);
         short i=1;
         while (i <= pos && courant != NULL){
               courant=courant->suiv;
               i++;
         }
          if(i==pos){
              nouveau->suiv=courant;
              nouveau->preced=courant->preced;
              tempo=courant->preced;
              tempo->suiv=nouveau;
              courant->preced=nouveau;
          }
          return l;

}
pEtu2 supp_tete_bis(pEtu2 l ){
      pEtu2 m;
      if(l != NULL)
         m=l;
      l=l->suiv;
      if(l != NULL){
       l->preced=NULL;
       m=detruire_maillon(m);
      }
       return l; 
}
pEtu2 supp_queue_bis(pEtu2 l){
         if(l->suiv ==  NULL)
              l=detruire_maillon_bis(l);
          else{
             pEtu2 courant=l,pre;
              while (courant->suiv->suiv!= NULL)
              {   
                  pre=courant;
                   courant=courant->suiv;
              }
             pre->suiv=NULL;
             courant=detruire_maillon_bis(courant);  
          }
           return l;
}

pEtu2 supp_position_bis(pEtu2 l ,int k){
        pEtu2 p1=NULL,p2=NULL,cour=l;
        int i=1;
        while( cour &&  i != k){
             cour=cour->suiv;
             i++;
        }
        if(cour){
             p1=cour->preced;
             p2=cour->suiv;
             p1->suiv=p2;
             p2->preced=p1;
             cour=detruire_maillon_bis(cour);
        }
        return l;
}
pEtu2 detruire_maillon_bis(pEtu2 l){
      free(l);
      l=NULL;
      return l;
}

pEtu2  supp_liste_bis(pEtu2 l){
       while( l){
            pEtu2 n=l;
            l=l->suiv;
            n=detruire_maillon_bis(n);
       }
       l=NULL;
       return l;
}

