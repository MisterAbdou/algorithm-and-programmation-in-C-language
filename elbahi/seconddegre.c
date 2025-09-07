#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float delta(float  a,float b, float c)
{
     float d;
     d=((b*b)-(4*a*c));
     return d;
}
void second_degre(float a,float b, float c)
{
            float x1;
            float x2;
            float X0;
        if(a==0){
                 if(b != 0)
                   printf("la solution est %.2f",-c/b);
                else
                    printf("impossible!");
        }
         else
        {
                if(delta(a,b,c) == 0){
                     X0=((-b)/(2*a));
                     printf(" On a une racine double %.2f",X0);
                }
                 else
                {
                    if(delta (a,b,c)> 0){

                         x1=(-b - sqrt(delta(a,b,c))) /(2*a);
                         x2=(-b +sqrt(delta(a,b,c))) /(2*a);
                         printf(" On deux racines x1:%.2f et x2:%.2f\n",x1,x2);
                     }
                     else{
                         printf("pas de solution possible!\n");
                     }
                 }
        }
}
int main()
{
          float x,y,z;
         printf(" donner le coefficient a :");
         scanf("%f",&x);
         printf(" donner le coefficient b :");
         scanf("%f",&y);
         printf(" donner le coefficient c :");
         scanf("%f",&z);
         second_degre(x,y,z);
        return 0;
}