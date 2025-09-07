#include<stdio.h>
#include<stdlib.h>
int main ()
{
   int s,i,n;
   printf("donner le dernier nombre:");
   scanf("%d",&n);
   s=0;
   for(i=0;i<=n;i++)
   {
    s=s+i;
   }
 printf(" la somme des premiers entiers est :%d\n",s);
 return 0;
}
