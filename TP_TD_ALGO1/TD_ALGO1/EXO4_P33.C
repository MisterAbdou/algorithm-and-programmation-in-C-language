#include<stdio.h>
#include<stdlib.h>
int main()
{
  int N,j,r,h,mn,s;
  printf("donner un nombre N en seconde:");
  scanf("%d",&N);
  j=N/86400;
  r=N%86400;
  h=r/3600;
  mn=(r%3600)/60;
  s=(r%3600)%60;
  printf("%d jours, %d heures ,%d minutes et %d secondes\n",j,h,mn,s);
  return 0;
}