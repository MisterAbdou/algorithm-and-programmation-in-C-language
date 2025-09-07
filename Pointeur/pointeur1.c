#include<stdio.h>
int main()
{
     int t[4][3]={1,2,3,4,5,6,47,8,9};/*c'est une  maniere de remplir 
     *une matrice (autrement dit un tableau a plusieurs dimensions) */
    /* il y'a aussi une autre maniere de remplire cette derniere :
    *  int t[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,13}} */
     int j,i;
     for(i = 0; i < 4 ; i++)
     {
         for(j = 0; j <3 ; j++)
         {
              printf("t[%d][%d]= %d\n",i,j,t[i][j]);
         }
     }
     return 0;
}
