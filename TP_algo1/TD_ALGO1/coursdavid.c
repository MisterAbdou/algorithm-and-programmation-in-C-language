#include<stdio.h>
#include<stdlib.h>
int main()
{
   int val,nval,s;
   int max ,min;
   printf("donner une valeur:");
   scanf("%d",&val);
   if(val!=-1)
   {
    max=val;
    min=val;
    s=val;
    nval=1;
   }
   while((val!=-1) &&(nval<=10))
   {
      printf("donner une valeur:");
      scanf("%d",&val);
      if(val!=-1)
      {  
        if(val>max)
          max=val;
          else
          min=val;
        s+=val;
        nval++;

      } 
   }
   printf("la sommme des valeurs vaut:%d\n",s);
   printf("le maximum vaut:%d et le minimum vaut:%d",max,min);
   return 0;
}



