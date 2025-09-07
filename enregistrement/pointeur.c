#include<stdio.h>
#include<stdlib.h>
void maximum(int *nombre1,int *nombre2)
{
        if(*nombre1< *nombre2)
                *nombre1=*nombre2;
}
int main()
{
     int a,b;
     printf("donner la valeur de a :");
     scanf("%d",&a);
     printf("donner la valeur de b:");
     scanf("%d",&b);
     maximum(&a,&b);
     printf("le maximum entre a et b est :%d",a);
     return 0;
}