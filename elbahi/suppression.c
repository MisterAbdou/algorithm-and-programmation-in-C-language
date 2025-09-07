#include<stdio.h>
#include<stdlib.h>
const int nmax =100;
int main()
{
     int T[nmax];
     int n,i,x;
     do
     {
         printf("donner la taille du tableau :");
         scanf("%d",&n);
     }while(n<=0 || n > nmax);

     for(i=0;i<n;i++)
     {
        do{
             printf("[%d]= ",i+1);
             scanf("%d",&T[i]);
        }
         while(T[i]<0);
     }

         printf("donner l'element a chercher dans le tableau :");
         scanf("%d",&x);


     i=0;
     while(i<n && T[i]!=x)
     {
        i++;
     }
     if(i<n)
    {
         printf("%d se trouve dans le tableau\n",x);
         while(i<=n-1)
         {
             T[i]=T[i+1];
             i++;
         }
         for(i=0;i<n-1;i++)
         {
            printf("[%d]=%d\n",i+1,T[i]);
         }
    }
    else
     {
        printf(" %d ne se trouve  pas dans le tableau .Veuillez saisir un bon nombre !",x);
     }
   return 0;
}
