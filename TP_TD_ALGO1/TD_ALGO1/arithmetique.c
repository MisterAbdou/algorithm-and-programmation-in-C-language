#include<stdio.h>
#include<stdlib.h>
int main()
{
  int s=0,n,i,a,b;
  printf("donner le dernier terme:");
  scanf("%d",&n);
  printf("donner deux nombres:");
  scanf("%d",&a);
  scanf("%d",&b);
  for(i=1;i<=n;i++)
  {
   s+=a+b*i;
  }
  printf("la sommes des %d termes premiers est :%d\n",n,s);
  return 0;
}
