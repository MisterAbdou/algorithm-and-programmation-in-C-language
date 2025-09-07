#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int a,b,c;
   float x,y,w,z,delta;
   printf(" donner les valeures de a b et c:");
   scanf("%d %d %d",&a,&b,&c);
   if(a==0)
   {
      if(b==0)
       {
         if(c==0)
         {
            printf(" tous reels est solutions");
         }
         else
         {
           printf("pas de solution possible!");
         }
       }
      else
      { 
       z=c/b;
       printf("on a une seule solution:%f\n",z);
      }
   }
   else
   {
     delta=b*b-(4*(a*c));
     if(delta==0)
     {
       w=-b/(2*a);
       printf(" l'equation admet une racine double:%f\n",w);
     }
     else
     { 
        if(delta>0)
        {
         x=(-b-sqrt(delta))/(2*a);
         y=(-b+sqrt(delta))/(2*a);
         printf("l'equation admet deux solutions:%.2f\n %.2f\n",x,y);
        }
        else
        {
            printf(" l'equation n'admet pas de solution possible!\n");
        }
     }
   }
   return 0;
}