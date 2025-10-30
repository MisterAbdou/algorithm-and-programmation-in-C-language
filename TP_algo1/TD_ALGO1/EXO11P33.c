#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,n,nbd,s,m,sp;
    //nbd=nombre de diviseur et s=somme des nombres des diviseurs
     do
    {
       printf("donner un nombre:");
       scanf("%d",&n);
    }while(n<0);
     s=0;nbd=1; m=(int)(sqrt(n));
     // on cherche la somme des diviseurs entre 1 et racine de n
     for(i=1;i<=m;i++)
     {
         if(n%i==0)
         {
            s+=i;
            nbd++;
         }
     }
     //sp est la somme des diviseurs de s ou bien nbd
     sp=0;m=(int)(sqrt(nbd));
     for(i=1;i<=m;i++)
     {
         if(nbd%i==0)
         {
            sp+=i;
         }
     }
     if(nbd==sp)//cela veut que nbd est parfait
     {
      sp=0;m=(int)(sqrt(s));
         for(i=1;i<=m;i++)
        {
             if(s%i==0)
             {
               sp+=i;
             }
        }
         if(s==sp)
         {
            printf("le nombre %d est sublime\n car s et nbd sont parfaits\n",n);
         }
         else
         printf("le nombre %d n'est pas sublime \n car s n'est pas parfait\n",n,nbd);
     }
     else
     printf("le nombre %d n'est pas sublime \n car %d n'est pas parfait \n",n);
  return 0;
}
