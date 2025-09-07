#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligne ,i,j,k;
    do{
        printf("donner le nombre de ligne :");
        scanf("%d",&ligne);
    }while(ligne<0);
    for(i=1;i<=ligne;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf(" ");
        }
        for(k=1;k <= ((2*i)-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
