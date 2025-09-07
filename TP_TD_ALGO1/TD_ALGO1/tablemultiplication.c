#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,r;
    printf("donner le numero de la table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      r=i*n;
      printf("%d x %d= %d\n",n,i,r);
    }
 return 0;
}