#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i;
   float s;
   printf("donner un nombre: ");
   scanf("%d",&n);
   s=0;
   for(i=1;i<=n;i++)
   {
      s=s+(1.0/i);
   }
   printf("la somme est: %.2f\n",s);
   return 0;
}