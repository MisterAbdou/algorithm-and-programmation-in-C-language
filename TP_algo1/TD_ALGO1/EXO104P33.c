#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n,i,s,x0;
     printf("donner un nombre:");
     scanf("%d",&n);
     x0=(n-1)*(n-1)+n;
     //xo est le premier terme
     printf("%d^3=%d",n,x0);
     for(i=1;i<=n;i++)
     {   
        s=x0+(2*i);
        if(i<=n-1)
           printf("+%d",s);
     }  
  return 0;
}