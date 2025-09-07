#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
     int m,n,i,s;
     bool pal;
     do
     {
         printf("donner un nombre:");
         scanf("%d",&n);
         i=2;
         while((i <= n/2) &&( n%i!=0))
         {
             i++;
         }
     }while(((n<=0)||(i>n/2))&&( n!=-1));
     pal=1;
     while((n != -1)&& (pal==1))
     {
         s=0;m=n;
         while(n!=0)
         {
            s=s*10+(n%10);
            n/=10;
         }
         pal=pal&&(s==m);
        do
        {
             printf("donner un nombre:");
             scanf("%d",&n);
            i=2;
            while((i <= n/2) &&( n%i!=0))
            {
                 i++;
            }
         }while(((n<=0)||(i>n/2))&&( n!=-1));
     }
     if(pal)
     {
         printf("tous ces nombres sont premiers et palindromes!\n");
     }
     else
     {
         printf("tous ces nombres  ne sont  pas premiers et palindromes!\n");
     }

    return 0;
}
