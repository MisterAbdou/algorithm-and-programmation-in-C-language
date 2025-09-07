#include<stdio.h>
#include<stdlib.h>
int main()
{
    //ui represente le terme Un et uj represente le terme Un-1
   int U,n,ui,uj,i;
     do
     {
      printf("donner un nombre:");
      scanf("%d",&n);
     }while(n<2);
         ui=1;
         uj=0;
     for(i=2;i<=n;i++)
     {
        U=ui+uj;
        uj=ui;
        ui=U;
     }
     printf("U%d=%d",n,U);
    return 0; 
}
