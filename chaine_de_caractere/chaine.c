#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
      signed char prenom[]="abdou";
      signed char stockage[256];
      
       printf("votre prenom est :%s\n",prenom);
       printf("donner un autre nom: ");
       scanf("%s",stockage);
       printf("votre nom complet est :%s\n",strcat(prenom,stockage));
       strcpy(prenom,stockage);       
       printf("votre prenom  actuel est :%s\n",prenom);
       printf("sa taille vaut:%d\n",strlen(prenom));
    return 0;
}