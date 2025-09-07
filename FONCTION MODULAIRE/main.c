#include<stdio.h>
#include"player.h"
#define afficher printf
int main()
{
       bonjour();
       int level=5;
       afficher("niveau :%d\n",level);
       level=augment();
       afficher("niveau actuel:%d\n",level);
            level=augment();
         afficher("niveau actuel:%d\n",level);
            level=augment();
          afficher("niveau actuel:%d\n",level);
            level=augment();
           afficher("niveau actuel:%d\n",level);
          afficher("nom du fichier:%s\n",__FILE__);
          afficher("heure :%s\n",__TIME__);
       return 0 ;
}