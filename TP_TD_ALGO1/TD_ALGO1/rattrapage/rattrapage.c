#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,n,i,s;
   do
   {
       printf("donner un nombre entier:");
       scanf("%d",&n);
   }while(n<0);

   a=1;
   printf("%d",a);
   for(i=2;i<=n;i++)
   {
       a=(a*10)+1;
       printf("+ %d ",a);
   }

    s=0;
    for(i=1;i<=n;i++)
    {
      s=(s*10)+i ;
    }
    printf("\n la somme est :%d",s);

   return 0;
}
