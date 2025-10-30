#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
   int c,n,r;
   bool trouve=0;
   do
   {
     printf("donner un nombre");
     scanf("%d",&n);
   }while(n<10);
   do
   {
     printf("donner un chiffre ");
     scanf("%d",&c);
   }while(c<0 ||c>9);
    while(n>0)
    {
        r=n%10;
        if(r==c)
        {
            trouve=1;
        }
        n/=10;
    }
     if(trouve)
     {
        printf("%d appartient a ce nombre",c);
     }
     else
     {
        printf("%d n'appartient pas a ce nombre",c);
     }
     return 0;
}