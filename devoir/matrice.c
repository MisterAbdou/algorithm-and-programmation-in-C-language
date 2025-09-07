#include<stdio.h>
#include<stdlib.h>
const int nmax =100;
#define mmax 100
int main()
{
     int matrice[nmax][mmax];
     int s,ligne,i,j,colonne;
     int k;
     do
     {
         printf("donner le nombre de ligne :");
         scanf("%d",&ligne);
     }while(ligne<=0 || ligne >nmax);
     do
     {
         printf("donner le nombre de colonne:");
         scanf("%d",&colonne);
     }while(colonne<=0 || colonne > mmax);
     for(i=0;i<ligne;i++)
     {
         for(j=0;j<colonne;j++)
         {
            do{
                 printf("[%d,%d]=",i+1,j+1);
                 scanf("%d",&matrice[i][j]);
            }while( matrice[i][j]<0 || matrice[i][j]>9);
         }
     }
     s=0;
     for(i=0;i<ligne;i++)
     {
        for(j=0;j<colonne;j++)
        {
             if(i==j)
             {
                 s=s*10+(matrice[i][j]);

             }
        }
     }
     printf("les elements supprimes sont :%d\n",s);
     i=0;
     while(i<ligne)
     {
        j=0;
        while(j<colonne-1)
        {
             if(i==j)
             {
            for(k=j;k<colonne-1;k++)
            {
                 matrice[i][k]=matrice[i][k+1];
            }
            }
          j++;
        }
        i++;
     }

     for(i=0;i<ligne;i++)
     {
        for(j=0;j<colonne-1;j++)
        {
            printf("[%d,%d]=%d\t",i+1,j+1,matrice[i][j]);
        }
        printf("\n");
     }

     return 0;
}
