#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=3,y,z,b,c;
  float x;
     y=3%i +27;
     printf("la valeur de y est : %d\n",y);
         z=3%(i+27);
         printf(" la valeur de z est :%d\n",z);
             b=(10>5) || (-1>=-2) && (4<3);
             printf(" la valeur de b est :%d\n",b);
                 c=((10>5) || (-1>=-2)) && (4<3);
                  printf(" la valeur de c est :%d\n",c);
                     y=++i *4;
                     printf(" la pr%c-incre%cmentation donne y=%d et i=%d \n",130,130,y,i);
                         i=3; y=i++ *4;
                         printf(" la post-incr%cmentation donne y=%d et i=%d \n",130,y,i);
                             x=i/z;
                             printf("la valeur de x est :%f \n",x);
                                 x=(float)i/z;
                                 printf("la valeur de x est: %f \n",x);
                                  return 0;
}