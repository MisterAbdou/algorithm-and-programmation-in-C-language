#include<stdio.h>
#include<stdlib.h>
int main()
{  
  int n,i,p;
   printf("donner un nombre:");
   scanf("%d",&n);
   for(i=n;i<=n+19;i++)
   {
    printf("%d\t",i);
    if(i==(n+19))
    {
      p=i;
      printf("\nle plus grand parmi ces nombres est :%d\n",p);
    }
   }
 return 0;
}