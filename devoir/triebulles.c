#include<stdio.h>
#include<stdlib.h>
void permuter(int *x1,int*x2)
{
      int tempo=*x1;
      *x1=*x2;
      *x2=tempo;
}
void trie_rapide(int t[],int gauche,int droite)
{  
    if(gauche<droite)
    {
         int i,pivot,j;
         i=gauche;
         j=droite;
         pivot=t[(i+j)/2];
         while(i<j)
         {
              while(t[i]< pivot){
                    i++;
              }
              while(t[j]> pivot){
                  j--;
              }
              if(i<j)
                permuter(&t[i],&t[j]);
             i++;
             j--;
         }
         trie_rapide(t,gauche,j);
         trie_rapide(t,i,droite);
    }

}
int main()
{
    int n; 
    do{
           printf("donner la taille du tableau:");
           scanf("%d",&n);
    }while(n<0);
    int t[n];
//     saisi des elements du tableaux
    for(int i=0;i<n;i++){
           printf("element%d:",i+1);
           scanf("%d",&t[i]);
    }
    // appel a la procedure
   trie_rapide(t,0,n);
    // affichage du tableau 
    for( int i=0;i<n;i++)
    {
        printf(" [%d] ",t[i]);
    }
    return 0;
}