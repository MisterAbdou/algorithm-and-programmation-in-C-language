#include<stdio.h>
void saisi(int t[])
{
     int i;
     for( i=0;i < 10 ;i++)
     {
         printf("element %d :",i+1);
         scanf("%d",&t[i]);
     }
}
void croissant(int t[])
{
    int i,j,tempo;
     for(i=0 ;i < 10 ;i++)
     {
         for(j=i+1; j< 10 ; j++)
         {
              if( t[i] > t[j]){
                  tempo=t[i];
                  t[i]=t[j];
                  t[j]= tempo;
              }
         }
     }
}
void decroissant(int t[])
{
   int i,j,tempo;
     for(i=0 ;i < 10 ;i++)
     {
         for(j=i+1; j< 10 ; j++)
         {
              if( t[i] <t[j]){
                  tempo=t[i];
                  t[i]=t[j];
                  t[j]= tempo;
              }
         }
     }  
}
void affiche( int t[])
{
         int i;
     for( i=0;i < 10 ;i++)
     {
         printf("[%d] ",t[i]);
     }
}

int main()
{
      int tab[10];
     saisi(tab);
     croissant(tab);
      printf(" tableau trie par ordre croissant :\n");
     affiche(tab);
     decroissant(tab);
     printf(" \ntableau trie par ordre decroissant :\n");
     affiche(tab);
      return 0;
}
