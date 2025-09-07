#include<stdio.h>
#include<stdlib.h>
const int max =100;
int main()
{
   int T[max][max];
   int m,i,j,taille;

   printf("donner la taille du tableau:");
   scanf("%d",&taille);

    printf(" remplissage du tableau:\n");
   for(i=0;i<taille;i++)
   {
       for(j=0;j<taille;j++)
       {
           printf("[%d][%d]=",i+1,j+1);
           scanf("%d",&T[i][j]);
           while((T[i][j]<0) ||(T[i][j] > 9))
           {
             printf("[%d][%d]= ",i+1,j+1);
             scanf("%d",T[i][j]);
           }
       }
   }
   i=0;j=0;m=taille;
   while(i<=taille)
   {
       while(j<=taille-1)
       {
           if(i==j)
           {
               T[i][j]=T[i][j+1];
           }
           j++;
       }
       j=0;
       i++;
   }
   taille--;
   printf("......................\n");
   printf("nouveau tableau :\n");
   for(i=0;i<=taille;i++)
   {
       for(j=0;j<=taille;j++)
      {
        printf("[%d][%d]=%d\n",i+1,j+1,T[i][j]);
        j++;
      }
      i++;
   }
   printf("les elements supprim%c sont:",130);
    taille=m;
   for(i=0;i<=taille;i++)
   {
       for(j=0;j<=taille;j++)
       {
             if(i==j)
             printf("%d ",T[i][j]);
       }
   }
   return 0;
}

