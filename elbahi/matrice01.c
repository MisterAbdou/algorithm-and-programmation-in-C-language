#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
const int ligne=4;
const int colonne=6;
int main()
{
     int i,j,nbf,n;
     int T[ligne][colonne];
     bool trouve=0;
     do
     {
         printf("donner un nombre entier:");
         scanf("%d",&n);
     }while(n<0);

     for(i=0;i < ligne;i++)
     {
        for(j=0;j < colonne;j++)
        {
             printf("[%d][%d]=",i+1,j+1);
             scanf("%d",&T[i][j]);
        }
     }
     i=0;nbf=0;

     while(i < ligne)
     {   
        j=0;
        while(j < colonne) 
        {
             if(n == T[i][j])
            {
                 trouve=1;
                 nbf++;
            }
            j++;
        }
        i++;
     }
     if(trouve)
     {
        printf("%d  existe dans le tableau %d fois.\n",n,nbf);
     }
     else
     {
        printf(" desolei mais %d n'est pas dans le tableau!",n);
     }
return 0;
}