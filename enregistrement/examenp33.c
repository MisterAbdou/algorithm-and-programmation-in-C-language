#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float puissance(int n,float x)
{
    if(n==0)
         return 1;
    else
    {
          if(n%2==0)
              return pow(x,n/2)*pow(x,n/2);
          else
               return x*pow(x,n-1);
    }
}
int main()
{
     int a;
     float b;
     printf("donner a");
     scanf("%d",&a);
     printf("donner b");
     scanf("%f",&b);
     printf(" la puisannce vaut :%f",puissance(a,b));
     return 0;
}