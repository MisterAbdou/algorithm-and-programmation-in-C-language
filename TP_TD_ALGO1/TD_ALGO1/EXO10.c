#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,n,r=0;
   printf("donner un nombre entier:");
   scanf("%d",&n);
    a=n;
   while(n>0)
   {
    r=r+(n%10);
    n=n/10;
   }
   if((a%r)==0)
    printf("  ce nombre est un nombre de harshad\n");
   else
    printf("ce nombre n'est pas un nombre de harshad\n");
   return 0;
}
