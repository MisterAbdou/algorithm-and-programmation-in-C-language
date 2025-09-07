#include<stdio.h>
#include<stdlib.h>
int ackermann( int m,int n)
{
     if(m==0){
        return n+1;
     }
     else{
            if(n==0)
              return ackermann(m-1,1);
            else
              return ackermann(m-1,ackermann(m,n-1));       
     }

}
int main()
{
     int n,m;
     printf("donner n:");
     scanf("%d",&n);
     printf("donner m:");
     scanf("%d",&m);
     printf("le nombre d'ackermann vaut :%d",ackermann(m,n));
     return 0;
}