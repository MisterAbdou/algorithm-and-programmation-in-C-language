#include<stdio.h>
#include<stdlib.h>
int somme_p_entier( int n)
{
     if(n==1)
     {
         return n;
     }
     else
     {
         return n+somme_p_entier(n-1);
     }
}
int main()
{
     int nombre;
     int reponse=1;
      while(reponse==1){
        do
        {
               printf("donner un nombre  entier  3 <=n< 20:");
               scanf("%d",&nombre);
        }while(nombre <3 || nombre>=20);
      int t[ nombre];
           printf("la somme des %d  premiers entiers est :%d\n",nombre,somme_p_entier(nombre));
         for(int i=0;i<nombre;i++)
         {     
            t[i]=(i+1)*2;
             printf("T[%d]=%d\n",i,t[i]);
         }
                do{
                printf("TAPEZ 1 POUR CONTINUER 0 POUR QUITTER:");
                 scanf("%d",&reponse); 
                }while( reponse  !=1 && reponse !=0);   
         }
    return 0;
}