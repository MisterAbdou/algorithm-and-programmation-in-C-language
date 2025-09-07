#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ,r,s,k,i;
    printf("donner un nombre positif:");
    scanf("%%d",&n);
    s=0;i=1;
    while(n!=0)
    {
         r=n%10;
         k=r*r;
         if(k>10){
            s+=k*i*10;
         }
         else
         {
            s+=k*i*i;
         }
         i=i*10;
       n/=10;
    }
  printf("la valeur retournee est :%d",s);
 return 0;
}