#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,resultat;
     int  n,m;
     do
     {
         printf("donner la valeur de a:");
         scanf("%d",&a);
         printf("donner la valeur de b:");
         scanf("%d",&b);
     }while( a<0 || b<0 );
     resultat=0;m=a;n=b;
     while(b !=0)
     {
         if(b%2==0)
         {
            a*=2;
            b/=2;
         }
         else
         {
            resultat+=a;
            b--;
         }
     }
    printf("la multiplication de %d x %d est egale a :%d\n",m,n,resultat);
    return 0;
}
