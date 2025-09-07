#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pal( char t[])
{
    //   char chaine[100];
      int taille=strlen(t);
      int i=0;
      while((i<taille-i-1)&& t[i] ==t[taille-i])
      {
            i++;
      }
      if(i>taille-i-1)
      {
            printf(" palindrome");
      }
            printf("non palindrome");
}
int main()
 {
      char ch[]="matam";
     pal(ch);
      return 0;
 }