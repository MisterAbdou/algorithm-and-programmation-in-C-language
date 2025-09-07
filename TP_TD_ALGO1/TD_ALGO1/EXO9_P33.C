#include<stdio.h>
#include<stdlib.h>
int main()
{
   int nb_annes;
   float p_popous,p_shadoks;
   p_popous=10000000;
   p_shadoks=5000000;
   nb_annes=0;
   while(p_shadoks<p_popous)
   {
    p_popous+=500000;
    p_shadoks+=(p_shadoks*0.03);
    nb_annes++;
   }
   printf("le nombre d'annees pour que la pop de shim shadoks depasse celle de papous est: %d ans\n",nb_annes);
   return 0;
}