#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    // initialisation et declaration :first method
     char chaine[6]={'h','e','l','l','o','\0'};
     printf("%s\n",chaine);
    // second method
    char chaine1[]="hello";
    printf("%s\n",chaine1);
    chaine1[4]='g';//affectation d'un caratere.pas de ""
    printf("%s\n",chaine1);
    // declaration en utilisant les pointeurs
    char *chaine2 ="hello";
    printf("%s\n",chaine2);
    printf("copillage de chaine dans une autre chaine:  %s\n",strcpy(chaine1,chaine2));
    // affichage et ecriture
    char c[10];
    printf("donner un nom:");
    scanf("%s",c);// ici pas de symbole & pourcle scanf car une chaine est un pointeur qui pointe sur le premier element 
    printf("ton nom est :%s",c);
    return 0;
}
