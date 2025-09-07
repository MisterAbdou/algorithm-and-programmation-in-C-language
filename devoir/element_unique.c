#include<stdio.h>
#include<stdlib.h>
const  int nmax = 8 ;
int main()
{
    int T[nmax],FR[nmax];
    int i,j,nb_fois;
    //  remplissage du tableau 
    for(i=0;i < nmax;i++)
    {
         printf("element %d=",i);
         scanf("%d",&T[i]);
    }
    i=0;j=0;
    while(i< nmax && j < nmax)
    {
         T[j]=T[i];
         i++;
         j++;
    }
    // tableau de frequence
    for(i=0; i< nmax ;i++)
    {
         FR[i]=0;
    }
     i=0;
     while(i < nmax)
     {
         j=0; nb_fois=0;
         while(j < nmax)
         {
             if( T[i] == T[j])
             {
                 nb_fois++;
                 FR[i]=nb_fois;
             }
             j++;
         }
         if(FR[i] == 1)
         {
            printf("%d\t",T[i]);
         }
         i++;
     }

}