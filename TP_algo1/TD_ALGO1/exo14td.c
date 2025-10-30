#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
     int n,r;
     bool trouve=1;
    do
    {
        printf("donner un nombre positif:");
        scanf("%d",&n);
    }while((n<10)||(n >=100));
    while(n!=0)
    {
        r=n%10;
        trouve= trouve &&(n%2==0);
        n=n/10;
    }
    if(trouve)
    {
        printf(" paires");
    }
    else
    {
        printf(" impaires");
    }
    return 0;
}
