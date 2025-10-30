#include"arbre.h"
// -----------------------------------------------
Arbre creer_noeud(int n ,Arbre A ,Arbre B){
     Arbre C;
     C=(Arbre)malloc(sizeof(Noeud));
     if(C != NULL){
         C->val=n;
         C->sag=A;
         C->sad=B;
         return C;
     }
}
// ----------------------------------------------------------------
void aff_Prefix(Arbre A){
    if(A != NULL){
        printf("%d",A->val);
        aff_Prefix(A->sag);
        aff_Prefix(A->sad);
    }
}
// ----------------------------------------------------
void aff_Infixe(Arbre A){
     if(A != NULL){
         aff_Infixe(A->sag);
         aff_Infixe(A->sad);
         printf("%d",A->val);
     }
}
// -----------------------------------------------
void aff_Postfixe(Arbre A){
    if( A != NULL){
        aff_Postfixe(A->sag);
        printf("%d",A->val);
        aff_Postfixe(A->sad);
    }
}
// ---------------------------------------------------
void aff_longeur(Arbre A){
         
}
// -------------------------------------------------
int estfeuille(Arbre A){
    return (A->sad==NULL)&&(A->sag == NULL);
}
// ----------------------------------------------------
int estNoeudInterne(Arbre A){
       retur (A->sad != NULL)|| (A->sag != NULL);
}
// ---------------------------------------------------------------------------
int nbrefeuillesInternes(Arbre A){
    if(A==NULL) return 0;
    else
       if(estfeuille(A)) return 0;
       else
       return 1+nbrefeuillesInternes(A->sag)+nbrefeuillesInternes(A->sad);
}
// -----------------------------------------------------------------------
int nbrfeuilles(Arbre A){
      if(A== NULL)  return 0;
      else{
            if(estfeuille(A))
               return 1;
            else return 1+nbrfeuilles(A->sad)+nbrfeuilles(A->sag);
      }
}
//=====================================================================
int hauteur(Arbre A){
     if(A==NULL)
        return 0;
        return 1+max2(hauteur(A->sad),hauteur(A->sag));
}


//----------------------------------------------------------
Arbre detruireNoeud(Arbre A){
     free(A);
     return NULL;
}

//--------------------------------------------
int nbrNoeud(Arbre A){
     if(A==NULL)
         return 0;
      else
       return 1+nbrNoeud(A->sag)+nbrNoeud(A->sad);
}

//-------------------------------------------------------------------
Arbre Inserer_Noeud(Arbre A,int i){
     if(A== NULL){
           return creer_noeud(i,NULL,NULL);
     }else{
          if(A->sag==NULL)
             A->sag=creer_noeud(i,NULL,NULL);
          else{
               if(A->sad== NULL)
                   A->sad=creer_noeud(i,NULL,NULL);
                else
                 if(nbrNoeud(A->sag) < nbrNoeud(A->sad))
                     A->sag=Inserer_Noeud(A->sag,i);
                  else
                    A->sad=Inserer_Noeud(A->sad,i);
          }
     }
     return A;
}
// -----------------------------------------------------------------------
Arbre succ(Arbre A){
    if(arbre(A)==NULL)
          return NULL;
     Arbre courant=A->sad;
     while (courant->sag != NULL)
           courant=courant->sag;
     return courant;
}
//------------------------------------------------------------------------------------
int rech(Arbre A,int x){
     if(A==NULL)
          return 0;
     else{
          if(A->val== x)
             return 1;
            else
              return rech(A->sag,x) ||rech(A->sad,x);
     }
}
//--------------------------------------------------------------------------------------------------
int rech_ABR(Arbre A,int x){
     if(A==NULL)  return 0;
     else
        if (A->val ==x) return 1;
          else
            if(x< A->val) return rech_ABR(A->sag,x);
             else   return rech_ABR(A->sad,x);
}
//-------------------------------------------
Arbre Inserer_Noeud_ABR(Arbre A,int i){
       if(A==NULL)
          return creer_noeud(i,NULL,NULL);
       else{
            if(i> A->val)
            A->sad=Inserer_Noeud_ABR(A->sad,i);
             else
             A->sag=Inserer_Noeud_ABR(A->sag,i);

          return A;
       }
}
//----------------------------------------
int maxA(Arbre A){
     if(A==NULL)
         return -1;
     else
         return max3(A->val,maxA(A->sag),maxA(A->sad));
}