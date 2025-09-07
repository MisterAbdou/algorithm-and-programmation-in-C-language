#include<stdio.h>
#include"player.h"
void bonjour()
{
    printf("hello guys!\n");
}
int augment()
{
         static int niveau=0;
            niveau+=2;
       return niveau;
}