#include<stdio.h>
#include<stdlib.h>
int fibo(int nombre)
{
     if(nombre==0){
          return 2;
     }
     else{
         return nombre+fibo(nombre-1);
     }
}
int main()
{
     int n;
     int indice;
      do{
            printf("donner l'indice n:");
            scanf("%d",&n);
      }while(n<0);
      indice=n+2;
      printf("U%d=%d\n",indice,fibo(n));
      return 0;
}