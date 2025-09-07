#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void palindrome(char t[],int taille,bool *trouve)
{ 
     int i;
     for(i=0;i<taille-i;i++)
     {
         if( t[i] ==t[taille-i])
              *trouve=true;
     }  
}
int main()
{ 
     char pal[45];
     int n;
     bool verification=false;
     printf("donner un nom :");
     gets(pal);
     n=strlen(pal);
     printf("la taille du tableau vaut :%d\n",n);
     palindrome(pal,n,&verification);
     if(verification==true)
     {
          printf("oui le nom donne est un palindrome\n");
     }
     else
     {
          printf(" ohh desole le nom saisi n'est pas un palidrome .Veuillez saisir un autre!\n");
     }
     return 0;
}

