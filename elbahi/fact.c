#include<stdio.h>
#include<stdlib.h>
int main()
{
    int f,i,n;
    printf("donner un nombre :");
    scanf("%d",&n);
    f=1;
    for(i=0;i<n;i++)
    {
        f=f*(n-i);
    }
    printf("la factorielle de %d est : %d\n",n,f);
    return 0;
}
