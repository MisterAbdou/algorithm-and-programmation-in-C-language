#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
  //#include<math.h>
int main()
{
     int s1,s2,m,n,max,i,j;
     bool trouve=0;
     do
     {
         printf("donner un nombre maximal:");
         scanf("%d",&max);
          m=max-1;
         n=m-1;
     }while(n<=0);

     s1=0;j=1;
     while(j<=max)
     {
         i=1;
        while(i<n)
        {
            if(n%i == 0)
            {
                s1+=i;
            }
            i++;
        }
        i=1;s2=0;
        while(i<m)
        {
            if(m%i == 0)
            {
                s2+=i;
            }
            i++;
        }
        trouve=((s1 == m)&&(s2 == n));
        if(trouve)
        {
            printf("(%d,%d),",n,m);
        }
        j++;m-=j;n-=j;
     }
  return 0;
}
