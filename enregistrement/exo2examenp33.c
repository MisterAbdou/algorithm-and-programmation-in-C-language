#include<stdio.h>
#include<stdlib.h>
void saisi(int t[],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("element %d",i+1);
          scanf("%d",&t[i]);
     }
    
}
void permuter(int *x1,int *x2)
{
       int tempo=0;
       tempo=*x1;
       *x1=*x2;
       *x2=tempo;
}
void affiche(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
         printf("%d  ",t[i]);
    }
}
void trie(int t[],int n)
{
       int c[n];

         int j,compteur,i=0;
         while(i<n)
         {
            compteur=0;
            j=0;
            while(j<n)
            {
                if(t[j]<t[i])
                 compteur++;
                j++;
            }
            c[i]=compteur;
            i++;
        }
        int i_min;
       i=0;j=0;
       while(i<n)
       {
              i_min=i;
              j=i+1;
              while(j<n)
              {
                   if(c[j]<c[i_min])
                        i_min=j;
                    j++;
              }
              permuter(&t[i_min],&t[j]);
              i++;
       }
}
int main()
{
    int tab[100];
    int taille;
    printf("donner la taille du tableau:");
    scanf("%d",&taille);
    saisi(tab,taille);
    trie(tab,taille);
    affiche(tab,taille);
    return 0;
}