#ifndef UTILITTAIRES_H
#define UTILITTAIRES_H
#include<stdio.h>
#define MAX 100
  void menu()
  {
      printf("MENU :algo de trie: \n");
      printf("1.Bulles \n");
      printf("2.Selection ordinaire \n");
      printf("3.Insertion sequentielle \n");
      printf("4. Quick sort \n");
      printf("5. Fin\n");
    
  }
   void saisi(int t[],int n)
   {
           int i;
       for(i=0; i <  n ; i++)
       {
         printf("t[%d]=",i);
         scanf("%d",&t[i]);
       }
    }
     void affiche( int t[],int n)
     {
          int i;
          for( i=0; i< n ;i++)
          {
              printf("[%d] ",t[i]);
           }
      }
    void permuter(int *element_1,int *element_2)
   {
     int tempo=0;
     tempo=*element_1 ;
     *element_1=*element_2;
     *element_2=tempo;  
   }
  void bulles(int t[],int taille)
  {
        while(taille > 0)
        {
            int i=0;
            while(i < taille){
                if(t[i] > t[i+1]){
                    permuter(&t[i],&t[i+1]);
                }
                i++;
            }
             taille--;
        }
 }
 void selection(int T[],int taille)
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
  #endif