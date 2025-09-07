#include<stdio.h>
#include<stdlib.h>
int main()
{
    int compteur,somme,nombre;
    do
    {
        printf("donner un nombre:");
        scanf("%d",&nombre);
    } while (nombre<=0);
    somme=1;
    compteur=2;
    printf("%d",somme);
    while(compteur<=nombre)
    {    somme=0;
        somme+=compteur;
        printf("+%d",somme);
        compteur++;
    }
    return 0;
    
}