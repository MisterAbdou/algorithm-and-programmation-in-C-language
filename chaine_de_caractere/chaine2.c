#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int i,taille;
     printf("donner la longueur maximale du chaine de chaine  :");
     scanf("%d",&taille);
      char chaine3[taille];
     printf("Donner le nom et le prenom de chaque etudiant:");
    for(i=0;i<taille;i++)
    {
         printf("prenom:");
         gets(chaine3);
         puts("nom:");
         gets(chaine3);
    }
      printf("%s\n",strchr(chaine3,'m'));
      return 0;
}

