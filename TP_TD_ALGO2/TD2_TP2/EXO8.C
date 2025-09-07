#include<stdio.h>
#include<stdlib.h>
void HANOI(int nbr_tige, char depart, char intermediare,char destination);
int main()
{
     int nombre;
     char pos_1='A';
     char pos_2='B';
     char pos_3='C';
     printf("soient A,B et C les tiges portant le(les) disque(s) avec A : la tige de depart, B :la tige intermediaire et C :la tige de destination\n");
     printf("Donner le nombre de disque:");
     scanf("%d",&nombre);
     HANOI(nombre,pos_1,pos_2,pos_3);
      return 0;
}
void HANOI(int nbr_tige, char depart, char intermediare,char destination)
{
      if(nbr_tige==1){
            printf("Deplacer  un disque de la tige %c  vers  la tige %c\n",depart,destination);
      }
      else{
           HANOI(nbr_tige-1,depart,intermediare,destination);
           printf("Deplacer un  disque  de la tige %c  vers la tige %c\n",depart,intermediare);
           HANOI(nbr_tige-1,intermediare,depart,destination);
      }
}


