#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void divisions(float a,float b,float*c,float *d,bool e )
{
     if(a==0){
         if(b==0){
            e==0;
             printf(" pas de divisions possibles !\n");
         }
         else{
             printf("la division de %.2f/%.2f est impossible!\n",b,a);
             *c=a/b;
             printf("la division de %f.2/%.2f est :%.2f\n",a,b,*c);
         }
     }
     else{
         if(b==0){
             printf("la division de %.2f/%.2f est impossible!\n",a,b);
              *d=b/a;
             printf("la division de %.2f/%.2f est :%.2f\n",b,a,*d);
         }
         else{
             e==1;
              printf("toutes les divisions sont possibles!\n");
             *c=a/b;
              printf("la division de %.2f/%.2f est :%.2f\n",a,b,*c);
             *d=b/a;
             printf("la division de %.2f/%.2f est :%.2f\n",b,a,*d);
         }
     }
}
int main()
{
     float a,b;
     float c,d;
     bool e;
     printf("donner la valeur de a :");
     scanf("%f",&a);
     printf("donner la valeur de b :");
     scanf("%f",&b);
     divisions(a,b,&c,&d,e);
    return 0;
}
