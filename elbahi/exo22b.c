#include<stdio.h>
#include<stdlib.h>
int main()
{
 int p,n,pt,i;
 printf("donner un nombre:");
 scanf("%d",&n);
 for(i=n;i<=n+19;i++)
 {
   printf("%d\t",i);
   if(i==(n+19))
   {
      p=i;
      pt=(n+19);
      printf("\nle plus grand est :%d",p);
      printf("\nsa position est:%d",pt);
   }
 }
 return 0;
}