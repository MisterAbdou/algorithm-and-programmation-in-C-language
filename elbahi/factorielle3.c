#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int factorielle(int N)
int main()
{
   int fact,n,j;
   bool x;
   printf("donner un nombre :");
   scanf("%d",&n);
   x==0;
   fact=1;
   j=1;
   while((fact<n )&& (!x))
   {
     fact=factorielle(j);
     if(n==fact)
     x=1;
     j++;
   }
   if(x==1)
   {
     printf("la factorielle de ce nombre est :%d\n",n);
   }
    else
    {
        printf("pas de factoriel possible!");
    }
    return 0;
}
    /*fonction fact( n)*/
    int factorielle(int N)
    {
       int i,resultat;
       resultat=1;
       for(i=0;i<N;i++)
       {resultat=resultat*1;}
       return resultat;
    }
