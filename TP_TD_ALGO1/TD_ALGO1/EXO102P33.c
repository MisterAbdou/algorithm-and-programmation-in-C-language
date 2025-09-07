#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
     long long n,i=1,carre,r=0;
     bool trouve=0;
      do{
          printf("donner un nombre:");
          scanf("%lld",&n);
        }while(n<0);
        carre=n*n;
        while(carre!=0)
        {
            r+=(carre%10)*i;
            if(n==r)
            trouve=1;
            carre/=10;
            i*=10;
        }
        if(trouve)
        printf("%lld est un nombre automorphe",n);
        else
        printf("%lld n'est pas un nombre automorphe",n);
   return 0;
}