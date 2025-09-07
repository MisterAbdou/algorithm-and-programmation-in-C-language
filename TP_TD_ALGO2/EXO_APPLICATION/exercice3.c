#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void nombrepremier(int nombre;bool trouve;)
{
     int i=2;
     while(i <= (nombre /2 )&& (nombre % i != 0))
     {
         i++;
     }
     if(i > nombre/2 )
     {
          trouve=1;
          printf("ce nombre est premier\n");
     }
     else
     {
          trouve=0;
             printf("ce nombre n'est pas premier\n");
     }
}
int main()
{
      int n;
      bool trouve=0;
      printf("donner un nombre:");
      scanf("%d",n);
      nombrepremier(n,trouve);
      return 0;

}