#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
 int n,r,s;
 bool egalite;
 printf("donner un nombre :");
 scanf("%d",&n);
 s=0;
 while( n/10<=0)
 r=n%10;
 s=s+(r*r*r);
  if(n==s)
  {
    egalite=1;
  }
  if(egalite)
  {
  printf("egalite est :%d =%d\n",n,s);
  }
  else
  {
    printf(" pas d'egalite");
  }
return 0;
}