#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb=0;
for(int i=10;i>=1;i--)
    for(int j=i;j>=0;j--)
{
    printf("yes");
    nb++;
}
printf("%d",nb);
    return 0;
}
