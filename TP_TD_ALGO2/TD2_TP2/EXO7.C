#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//  7 a)affichage des elements du tableau 
void affiche( int tableau[], int taille )
{
     if(taille==0){
            printf("\n");
     }
     else{
           affiche(tableau,taille-1);
           printf("[%d]",tableau[taille-1]);
     }
}
// 7b)affichage de l'inverse du tableau 
 void inverse(int tableau[],int taille)
{ 

        if(taille==0){
               printf("\n");
        }
        else{
               printf("[%d]",tableau[taille-1]);
               inverse(tableau,taille-1);
        }
}
// 7c)la somme des n premiers entiers
int sum(int tableau[],int taille)
{
       if(taille==0)
             return 0;
       else
       {
                return tableau[taille-1]+sum(tableau,taille-1);
       }
}
//7 d)recherche dichotomie
void dichotomie(int tableau[],int taille, int gauche,int element, bool*trouve)
{ 
          if(gauche<=taille){
               int milieu=(gauche+taille)/2;
              if(tableau[milieu] == element){
                      *trouve=true;
              }
              else{
                      if(tableau[milieu] < element){

                             dichotomie(tableau,taille,milieu+1,element,trouve);
                     }
                     else{

                             dichotomie(tableau,milieu-1,gauche,element,trouve);
                     }
              }
          }
}

int main()
{
    int taille; 
    do{
           printf("donner la taille du tableau:");
           scanf("%d",&taille);
    }while(taille<0);
    int tableau[taille];
//     saisi des elements du tableaux
    for(int i=0;i<taille;i++){
           printf("element%d:",i+1);
           scanf("%d",&tableau[i]);
    }
//     appel aux fonctions
    printf("AFFICHAGE:");
    affiche(tableau,taille);
    printf("\n INVERSE:\n");
    inverse(tableau,taille);
    printf("\nLA SOMME DES %d PREMIERS ENTIERS:\n",taille);
    printf("somme =%d",sum(tableau,taille));
//  .................................................................
    int n;
    printf("\nRECHERCHE DICHOTOMIE D'UN ELEMENT DANS UN TABLEAUN\n");
    printf("donnez l'element a chercher dans le tableau:");
    scanf("%d",&n);
    int g=0;
    bool e=false;
           dichotomie(tableau,taille,g,n,&e);
          if(e==true){
               printf("l'element  %d se trouve dans le tableau",n);
          }
          else{
                printf("l'element %d ne se trouve pas dans le tableau",n);
          }
    return 0;
}