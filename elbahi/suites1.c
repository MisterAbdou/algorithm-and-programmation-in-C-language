#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,u,v=6;
    printf ("donner le dernier terme:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        u=4*v+10;
        v=u;
     }
     printf("U%d=%d\n",n,u);
     return 0;
}