#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,i,age;
    printf("donner l'age d'AMAR:");
    scanf("%d",&age);
    s=0;
    for(i=1;i<=age;i++)
   {
    s=s+(500+(i*3));
   }
   printf("la somme qu'aura amar est :%ddh\n",s);
   return 0;
}