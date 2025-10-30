#include<stdio.h>
#include<stdlib.h>
{
     int n,i=1,carre,r=0;
      do{
          printf("donner un nombre:");
          scanf("%d",n);
        }while(n<0);
        carre=n*n;
        n=carre; 
        while(carre>0)
        {
          r+=(carre%10)*i;
          if(n=r)
          printf("%d est un nombre automorphe",n);
          carre/=10;
          i*=10;
        }
   return 0;
} 