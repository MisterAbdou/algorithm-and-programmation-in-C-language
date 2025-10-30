#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n,s,r=0;
     do
     { 
         printf("donner un nombre entier:");
         scanf("%d",&n);
     }while(n<0);
     s=n;
     while(n>0)
     {
         r+=n%10;
         n/=10;
     }
     if(r%9==0)
     {
        printf("%d est un nombre divisible par 9\n",s);
     }
     else
     {
        printf("%d n'est pas un nombre divisible par 9\n",s);
     }
     return 0;
}