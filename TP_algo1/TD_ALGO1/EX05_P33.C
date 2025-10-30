#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
  float delta,a,b,c,x1,x2,x0;
  printf(" donner trois variable:");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  if(a==0)
  {
   printf("%.2f(x+%.2f)",b,c/b);
  }
  else
  {
    delta= (b*b)-(4*a*c);
     if(delta==0)
      {
       x0=-b/(2*a);
       printf("%.2f (x-%.2f)^2",a,x0);
      }
      else
      {
         if(delta>0)
         {
          x1=(b+sqrt(delta))/(2*a);
          x2=(b-sqrt(delta)/(2*a));
          printf("%.2f(x+%.2f)(x+%.2f)",a,x1,x2);
         }
         else
         {
          x0=2*a;
          x1=sqrt(delta);
          printf("%.2f((x+%.2fi%.2f)/%.2f)((x-%.2fi%.2f)/(%.2f))",a,b,x1,x0,a,b,x1,x0);
         }
      }
  }
return 0;
}
