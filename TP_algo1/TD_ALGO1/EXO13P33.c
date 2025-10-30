#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
     int n,m,i,s;
     bool pal=1;
     do
     {
         printf("donner un nombre");
         scanf("%d",&n);
         i=2;
         while(i<=(n/2)&&(n%i!=0))
         {
            i++;
         }
     }while((n<=0)||(i<=n/2)&&(n==-1));
     // espace pour ne pas confondre les boucles
     while(n!=-1)
     {
         s=0;m=n;
         while(n>0)
         {
             s=s*10+n%10;
             n/=10;
         }
          pal=pal && (s==m);
         do
         {
             printf("donner un nombre");
             scanf("%d",&n);
             i=2;
            while(i<=(n/2)&&(n%i!=0))
            {
                 i++;
             }
          }while((n<=0)||(i<=n/2)&&(n==-1));
     }
     if(pal)
     printf("le nombre %d est un palindromes\n",m);
     else
     printf(" %d n'est pas un palindrome",m);
     return 0;
}