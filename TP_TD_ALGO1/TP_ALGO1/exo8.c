#include<stdio.h>
#include<stdlib.h>
int main()
{
     float C,F;
     
     printf("Celsius to Fahrenheit\n");
     printf("---------------------\n");
     printf(" Celsius    Fahrenheit\n");
     C=0.0;
     while(C<=150.0)
     {
         F=(C*(9.0/5.0))+32;
         printf("%.1f       %.1f\n",C,F);
         C+=10;
     }
     
     printf("\n");
     printf("Fahrenheit to Celsius\n");
     printf("---------------------\n");
     printf("Fahrenheit     Celsius\n");
     F=0.0;
     while(F<=150.0)
     {
         C=(F-32)*(5.0/9.0);
         printf("%.1f        %.1f\n",F,C);
         F+=10;
     }
     return 0; 
}