#include<stdio.h>
#include<stdlib.h>
void maxmin(int t[],int n, int *min ,int *max)
{
     int i=0;
     *max=t[i];
     *min=t[i];
     i=1;
     while(i<n)
     { 
         if(t[i]>*max)
         *max= t[i];
         if(t[i]<*min)
          *min=t[i];  
         i++;
     }
}
 void inverse(int t[],int n)
 {
    int i=0,tempo=0;

     while(i <n-1)
     {
         tempo=t[i];
         t[i]=t[n];
         t[n]=tempo;
         i++;
         n--;
     }
      printf("\n");
       for(i=0;i < 10; i++)
        {
          printf("[%d] ",t[i+1]);
        }
 }
int main()
{
     int t[100];
     int i;
     int M,N;
     
     for( i=0;i < 10 ;i++)
     {
         printf("element [%d ]",i+1);
         scanf("%d",&t[i]);
     }
      inverse(t,10);
      maxmin(t,10,&N,&M);
      printf(" le maximum est %d et le minimum est %d\n",M,N);

     return 0;
}