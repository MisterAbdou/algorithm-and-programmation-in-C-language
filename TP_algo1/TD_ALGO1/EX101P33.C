#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,r=0;
   printf("donner un nombre entier:");
   scanf("%d",&n);
   while(n>=0)
   {
    r=r+(n%10);
    n=n/10;
   }
   if(n%r==0)
    printf("%d est un nombre de harshad\n",n);
   else
    printf("%d n'est pas un nombre de harshad\n",n);
   return 0;
}