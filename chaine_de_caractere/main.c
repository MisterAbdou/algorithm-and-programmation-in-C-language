#include<stdio.h>
#include<stdlib.h>
void conversion( int *nombre_de_minutes,int *minute,int *heure)
{
      *heure= *nombre_de_minutes/60;
      *minute=*nombre_de_minutes%60;
}
int main()
{
    int m;
    int min,h;
    printf("donner le nombre de minute:");
    scanf("%d",&m);
    conversion(&m,&min,&h);
    printf("%d vaut : %d h %d mn",m,h,min);
    return 0;
}