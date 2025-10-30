#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,jours,semaines;
   printf("donner un nombre entier representant des jours:");
   scanf("%d",&n);
   semaines=n/7;
   jours=n%7;
   printf("ce nombre represente en semaines: %d et en jours: %d\n",semaines,jours);
   return 0;
}