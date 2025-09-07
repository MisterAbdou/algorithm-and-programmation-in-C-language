#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    do 
    {
         printf("donner un nombre entier:");
         scanf("%d",&n);
    }while(n<=0);
    i=2;
    while(i <= (n/2)&&(n%i != 0))
    {
        i++;
    }
    if(i>(n/2)&& n!= 1)
    {
        printf("%d est un nombre premier.\n",n);
    }
    else
    {
        printf("%d n'est pas premier!\n",n);
    }
}