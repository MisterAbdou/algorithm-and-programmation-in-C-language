#include<stdio.h>
#include<stdlib.h>
int multiplication(int n)
{
     int i;
      int s;
    for(i=1;i<=10;i++)
     {
          int s=n*i;
          return s;
    }
}
int main()
{
    int s,n;
     printf("donner le numero de la table:");
     scanf("%d",&n);
     s=multiplication(n);
     printf("%d\t",s);
}
