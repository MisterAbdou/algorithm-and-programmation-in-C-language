#include"file.h"
// ==========================================================
int filevide(FileEtudiant file){
           return (file.taille==0);
}
// ==============================================================
FileEtudiant enfiler( FileEtudiant f,chaine nom,chaine prenom,float note){
               if(filevide(f))//si la file est vide
                 f.queue=f.tete=inserer_tete(f.tete,nom,prenom,note);
                else {
                 f.queue=inserer_queue(f.queue,nom,prenom,note);
                 f.queue=(f.queue)->suiv;
                }
                f.taille++;
                return f;
}
// =========================================
FileEtudiant defiler(FileEtudiant  file){
    if( !filevide(file))//si la file n'est pas vide 
      file.tete=supp_tete(file.tete);
      file.taille--;
      if(file.tete==NULL)
        file.queue=NULL;
      return  file;
}
// =================================================
pEtudiant tete(FileEtudiant file){
        return (file.tete);
}
//=================================================================
FileEtudiant initFile(FileEtudiant file){
         file.tete=file.queue=NULL;
         file.taille=0;
         return file;
}
// ====================================================================================
void aff(pEtudiant l){
        if(l != NULL){
          pEtudiant courant=l;
          while(courant->suiv != NULL){
                printf("%s %s %f",courant->nom,courant->prenom,courant->note);
                courant=courant->suiv;
          }
               
        }
}

