#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
  int main()
  {
      int t[10];
      int reponse=1;
       int H;
       while(reponse==1){
       srand(time(NULL));
         for (int i=0;i<=10;i++){
                   H=rand()%100+1;
             if(H% 2==0){
                 t[i]=H;
                 printf("T[%d]=%d\n",i,t[i]);
            }
            else
            {
                 t[i]=H+1;
                 printf("T[%d]=%d\n",i,t[i]);
            }
         } 
             do{
                   printf("TAPEZ 1 POUR CONTINUER OU  0 POUR QUITTER:");
                   scanf("%d",&reponse);
               } while(reponse !=0 && reponse !=1);
       } 
       return 0;
 }
