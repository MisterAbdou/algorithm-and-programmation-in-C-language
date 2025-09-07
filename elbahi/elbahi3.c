#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n,s,i;
 printf("donner un nombre :");
 scanf("%d",&n);
 s=0;
 for(i=0;i<=n;i++)
 { 
    s=s+(pow(10,i));
 }
 printf("la somme est :%d\n",s);
return 0;
}