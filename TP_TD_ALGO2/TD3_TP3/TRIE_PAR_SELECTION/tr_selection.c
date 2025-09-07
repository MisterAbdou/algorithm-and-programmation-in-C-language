#include<stdio.h>
#include"tr_selection.h"
void permuter(int *element_1,int *element_2)
{
     int tempo=0;
     tempo=*element_1 ;
     *element_1=*element_2;
     *element_2=tempo;  
}
void tr_selection(int T[],int taille)
{  
      int j,i=0;
      int i_minim=0;
      while(i < taille)
      {
         i_minim=i;
          for( j = i+1; j < taille; j++)
          {
              if(T[i_minim] > T[j]){
                    i_minim=j;
              }
          }
          if(i_minim !=i)
           permuter(&T[i],&T[i_minim]);
          i++;
      }
}
void affiche(int T[],int taille)
{
    printf("TABLEAU TRIE \n");
    for(int i= 0; i< taille ; i++)
     {
         printf("[%d] ",T[i]);
     }
}