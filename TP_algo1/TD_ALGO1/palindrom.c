#include<stdio.h>
#include<stdlib.h>
int main()
{
     int s=0,n,m;
     do
     {
        printf("donner un nombre :");
        scanf("%d",&n);
     }while(n<0);
         m=n;
     while(n>0)
     {                                                         
         s=(s*10)+(n%10);
         n/=10;
     }
     if(s==m)
     {
     printf("%d est un palindrome\n",m);
     }
     else
     {
        printf("%d n'est pas un palindrom e\n",m);
     }
    return 0;
}     