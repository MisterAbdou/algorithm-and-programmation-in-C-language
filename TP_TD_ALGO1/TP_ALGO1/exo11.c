#include<stdio.h>
#include<stdlib.h>
int main()
{
     int j,s,i,n;

     printf("donner le dernier entier :");
     scanf("%d",&n);
     s=1;
     for(i=2;i<=n;i++)
     { s+=i;
         for(j=1;j<=i;j++)
         {    printf("%d",j);
            if(i!=j)
             printf("+");
         }
        printf("=%d\n",s);
     }
     return 0;
}
