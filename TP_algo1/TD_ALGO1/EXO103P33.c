#include<stdio.h>
#include<stdlib.h>
int main()
{
   int s=0,i=1,r1,r2;
   long long n;
   printf("donner un nombre:");
   scanf("%lld",&n);
     while(n>0)
     { 
         r1=n%10;
         n/=10;
         r2=n%10;
         if(r1==r2)
         continue;
         else
         {
            s=s+(r1*i);
         }
        i*=10;
     }
     printf("on aura :%d\n",s);
  return 0;
}