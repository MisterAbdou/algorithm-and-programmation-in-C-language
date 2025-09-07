#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<math.h>
#include<stdbool.h>
 void jouer( int R ,int H,int score,int nb_essaie,bool *trouve)
{
            if(H==R)
            {
                      *trouve =true;
                     printf(" \n Bravo! gagne au %d essai !\n",nb_essaie);
                     score+=(nb_essaie*50);
                     if(nb_essaie>5)
                           score-=50;
                     printf("\nScore :%d points \n",score);
            }
            else
            { 
                  if(H > R)
                  {
                     *trouve=false;
                      printf(" \nRESULTAT :trop petit\n");
                   }
                   else
                  {
                      *trouve=false;
                      printf("\nRESULTAT: trop grand\n ");
                   }              
            }
 }
int main()
{
       int nombre;
       int i=1;
       int nombre_machine;
       srand(time(NULL));
       nombre_machine=rand()%1000+1;
       int reponse=1;
       int sc=0;
      bool e=false;
    while(reponse==1){
          for(i=1;i<=10;i++)
          {  
                   if(e ==false)
                   {
                         printf("______%d tentative_____\n",i);
                         printf("\n");
                         printf("deviner :");
                          scanf("%d",&nombre);
                   }
                    if (e==false)
                   {
                         jouer(nombre,nombre_machine,sc,i,&e);
                          printf("....................\n");
                   }
                   else
                   {      
                        break;
                   }
           }
           
           if(i>=11 && e==false)
           {
                   printf(" Dommage vous avez perdu!\n");
                   printf("le nombre donne par la machine est:%d\n",nombre_machine);
                   printf("Score:%d\n",sc);
           }
           else
           {  
             do{
                   printf("TAPEZ 1 POUR CONTINUER OU  0 POUR QUITTER:");
                   scanf("%d",&reponse);
               } while(reponse !=1 && reponse !=0);
           }

   }
      return 0;
}