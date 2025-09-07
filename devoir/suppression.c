 #include<stdio.h>
 #include<stdlib.h>
 #define nmax 100 
 int main()
 {
     int taille, element,i,post;
     int T[nmax];
     do
     {
         printf("donner la taille du tableau :");
         scanf("%d",&taille);
     }while(taille < 0 || taille >nmax);
    //  remplissage du tableau
     for(i=0;i<taille;i++)
    {
          printf("element %d=",i+1);
          scanf("%d",&T[i]);
    }
    //  la position de l'element a rechercher
     printf("donner la position de l'element :");
     scanf("%d",&post);
         if(post <=0 || post >taille)
         {
             printf(" Erreur : la position que vous avez saisie n'existe pas !");
         }
         else
         {
             
             while(post<=taille)
             {
                 T[post]=T[post+1];
                 post++;
             }
            
             taille--;
            //  nouveau tableau
             for( i=0;i<taille;i++)
             {
                 printf("[ %d]\t",T[i]);
             }
         }
        return 0;
 }