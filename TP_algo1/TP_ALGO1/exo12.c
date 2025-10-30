#include<stdio.h>
#include<stdlib.h>
int main()
{
     int j,n,s,i;
    do
     {
         printf("entrez n ou une valeur<=0 pour terminer:");
         scanf("%d",&n);
     }while( n<=0 && n>0 );

     while(n>0)
     {
         s=1;
        for(i=2;i<=n;i++)
        {
          s+=i;
            for(j=1;j<=i;j++)
           {
                printf("%d",j);
                if(i != j)
                printf("+");
           }
        printf("=%d\n",s);
      }
       printf("entrez n ou une valeur<=0 pour terminer:");
       scanf("%d",&n);
     }
  return 0;
}
