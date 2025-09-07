#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 float a,b,c,delta;
 float x1,x2,x0;
  printf(" donner trois variables(a,b,c):");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  if(a==0)
  {
    if(b==0)
    {
         if(c==0)
        {
          printf("tout reel est solution");
        }
         else
        {
           printf(" impossibles");
        }
    }
    else
    {
        x0=-c/b;
        printf("l'equation admet une solution unique x0:%f\n",x0);
    }
  }
  else
  {
     delta= (b*b)-(4*a*c);
     if(delta==0)
     {
      x0=-b/(2*a);
       printf("l'equation admet une racine double x0:%.2f\n",x0);
     }
    else
     {
       if(delta<0)
       {
        printf(" pas de solution possible!\n");
       }
       else
       {
            if(b==0)
             {
              x1=(-b-sqrt(delta))/(2*a);
              x2=(-b+sqrt(delta))/(2*a);
              printf("l'equation admet deux solutions reels x1: %.2ff x2: %.2f \n",x1,x2);
             }
             else
            {
                 if(b<0)
                 {
                    x1=(-b+sqrt(delta))/(2*a);
                    x2=c/(a*x1);
                    printf("l'equation admet deux solutions reels x1:%.2f x2: %.2f\n",x1,x2);
                 }
                  else
                 {
                   x1=(-b-sqrt(delta))/(2*a);
                   x2=c/(a*x1);
                   printf("l'equation admet deux solutions reels x1:%.2f x2: %.2f\n",x1,x2);
                 }
            }
        }
      }
   }
 return 0;
}
