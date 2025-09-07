#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//exercice 1
int Sigma(int n)
{
     int s,i;
     s=0;
     for(i=1;i<=n;i++)
     {
          if(n%i==0)
             s+=i;
     }
      return s;
}
int NSP(int n)
{
     if(Sigma(Sigma(n))==(2*n))
        return 0;
     else
        return 1;
}
// exercice 2
int KR(int n)
{
     int i,s;
     s=0;
     for(i=1;i<=n;i++)
     {
           s+=(i*i);
     }
     return s;
}
int KRR(int n)
{
       if(n==1)
           return 1;
        else
           return n*n+KRR(n-1);
}
// exercice3
int  teste_trie(int t[],int taille)
{
     int i;
     i=0;
     while((i< taille-1))
     {
         if( t[i] >t[i+1])
         {
                return 0;
         }
         i++;
     }
     return 1;
}
int nombre_fois(int t[],int taille)
{
     int val,i=0;
        val=0;
     while((i< taille))
     {
         if( t[i] <= t[i+1])
            val++;
         i++;
     }
     return val;
}
int main()
{
     int nombre;
     printf("donner un nombre :");
     scanf("%d",&nombre);
     printf("la valeur sigma est:%d\n",Sigma(nombre));
     printf("la valeur  retournee %d  \n",NSP(nombre));
     printf(" la somme des %d premiers carres est :%d\n",nombre,KR(nombre));
      printf("version recursive \n");
     printf(" la somme des %d premiers carres est :%d\n",nombre,KRR(nombre));
     int tableau[100];
     int tailles;
       printf(" donner la taille du tableau :");
       scanf("%d",&tailles);
      printf("saisi des elements du tableau \n");
       for(int i=0;i< tailles;i++)
       {
             printf("[%d]= ",i+1);
             scanf("%d",&tableau[i]);
       }
       int est_trie;
       est_trie=teste_trie(tableau,tailles);
       if(est_trie==1)
          printf("le tableau est trie\n ");
        else
           printf("le tableau n'est pas trie !\n");
          
        printf(" le nombres de fois ou les nombres successifs dans le tableau sont trie dans l'ordre croissant est :%d\n",nombre_fois(tableau,tailles));

     return 0;
}