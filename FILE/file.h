#include"../listechaine/listechainee.h"
typedef struct file
{
    pEtudiant tete;
    pEtudiant queue;
    short taille;
}FileEtudiant;
int filevide(FileEtudiant);
FileEtudiant enfiler( FileEtudiant,chaine,chaine,float);
FileEtudiant defiler(FileEtudiant );
pEtudiant tete(FileEtudiant);
FileEtudiant initFile(FileEtudiant);
void aff(pEtudiant);


