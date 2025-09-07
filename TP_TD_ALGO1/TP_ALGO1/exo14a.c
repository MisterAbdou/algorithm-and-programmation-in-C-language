#include<stdio.h>
#include<stdlib.h>
#define nmax 100
int main()
{
     int taille,i;
     int T1[nmax];
     int T2[nmax];
     do{
          printf("donner  la taille du tableau:");
          scanf("%d",&taille);
     }while((taille < 0)||(taille > nmax));
     for(i=0;i<taille;i++)
     {
         printf("[%d]=",i);
         scanf("%d",&T1[i]);
     }
       printf("...................\n");
     i=0;
     printf("tableau en position paire\n");
    while(i < taille){
         if(i%2==0)
         {
             T2[i]=T1[i];
             printf("[%d]",T2[i]);
         }
         i++;
    }
    printf("\n tableau en position impaire:\n");
    i=0;
    while(i<taille)
    {
        if(i%2!=0)
        {
           printf("[%d]",T1[i]);
        }
      i++;
    }
 return 0;
}
