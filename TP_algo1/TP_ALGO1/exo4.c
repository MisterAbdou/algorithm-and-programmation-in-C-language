#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sexe;
    float taille,poids;
    float PI,BMI;
    char M='M',F='F';
    do
    {
      printf("donner le sexe de la personne :");
      scanf("%s",&sexe);
    } while(sexe !=F && sexe != M);
     do
     {
        printf("donner sa taille :");
        scanf("%f",&taille);
     }while(taille <=0);
     do
     {
       printf("donner son poids:");
       scanf("%f",&poids);
     }while(poids<=0);
      if(sexe == M)
     {
        PI=(taille-100)-(taille-150)/4;
        printf("son poids ideal est : %.2f\n",PI);
     }
     else
     {
       if(sexe == F)
       {
         PI=(taille-100)-(taille-150)/2;
         printf("son poids ideal est : %.2f\n",PI);
       }
    }
    BMI=poids/taille*0.02;
    if( BMI < 27)
    {
        printf(" la personne est normale\n");
    }
    else
    {
        if( ( BMI >=27 && BMI<32))
        {
            printf(" la personne est obese\n");
        }
        else
        {
            printf("la personne est malade");
        }
    }
  return 0;
}
