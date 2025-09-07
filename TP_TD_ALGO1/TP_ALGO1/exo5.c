#include<stdio.h>
#include<stdlib.h>
int main()
{   
     int N,nbval_positives,nbval_negatives,nbval_nulles;
     int n,i;

         printf("donner le dernier element:");
         scanf("%d",&n);
        
          nbval_positives=0;nbval_negatives=0;i=1;nbval_nulles=0;

     while(i<=n)
     {
         printf("donner un nombre entier quelconque :");
         scanf("%d",&N);
         if(N==0)
         {
             nbval_nulles++;
         }
        else
         {
             if(N>0)
             {
                 nbval_positives++;
             }
             else
             {
                 nbval_negatives++;
             }
         }

         i++;
     }
    
    printf(" on a :%d valeurs positives,%d valeurs negatives et %d valeurs nulles.",nbval_positives,nbval_negatives,nbval_nulles);
    return 0;
}