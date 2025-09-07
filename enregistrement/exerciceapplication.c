#include<stdio.h>
#include<stdlib.h>
typedef struct GestionFiche
{
     char nom[30];
     int numero;
      char numero_de_tel[15];
     unsigned int code_assurance;
}GestionFiche;
void saisi(GestionFiche *patient)
{
      printf("Donner le nom du patient :");
      gets(patient->nom);
      printf("Donner son numero :");
      scanf("%d",&(patient->numero));
      printf("Donner son numero de telephone:");
      scanf("%s",(patient->numero_de_tel));
      printf("Donner son code d'assurance :");
      scanf("%d",&(patient->code_assurance));
}
void affiche(GestionFiche *patient)
{
       printf("nom :%s\n",patient->nom);
       printf("numero: %d\n",patient->numero);
       printf("numero de telephone :%s\n",patient->numero_de_tel);
       printf("code d'assurance : %d\n",patient->code_assurance);
}
int main()
{
     GestionFiche client;
     saisi(&client);
     printf("\nVoici l'enregistrement fait sur le patient :\n");
     affiche(&client);
     return 0;
}