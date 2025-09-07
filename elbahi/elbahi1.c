#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,s=0,i;
   i=1;
 do{
     i++;
    printf("donner un nombre:");
    scanf("%d",&n);
    if(n<0)
    break;
    s=s+n;
   }while(i<=8);
   printf("la somme est :%d\n",s);
}