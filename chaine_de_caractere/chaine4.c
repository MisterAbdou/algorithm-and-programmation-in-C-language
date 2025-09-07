#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     char P1[100];
     printf("donner une chaine de caractere:");
     gets(P1);
     int taille,i;
     taille=strlen(P1);
     char P2[taille];
     for(i=0;i<taille;i++)
     {
         P2[i]=P1[i];
     }
     printf(" Affichage du dernier element du tableau :%s\n",P2[i]);
     printf(" affichage de la chaine after affactation dans l'autre chaine:");
     puts(P2);
     return 0;

}
