#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool nombre_parfait(int n)
{
     int i,s=0;
     for( i=1; i <= n/2; i++)
     {
         if(n%i==0){
             s+=i;
          }
     }
     return s==n;
}
int main()
{
      int nombre;
      printf("la liste des nombres parfaits compris entre 1 et 10000 :\n");
     for( nombre=1; nombre <= 10000; nombre++)
     {
          if(nombre_parfait(nombre)){
                printf("%d\t",nombre);
          }
     }
     return 0;
}
