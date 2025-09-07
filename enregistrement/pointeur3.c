#include<stdio.h>
#include<stdlib.h>
void minimum(int t[] ,int taille,int *minimum);
int main()
{
    int tableau[100],mini;
    int *p;
    p=tableau;
    for(p=tableau ;p < tableau+10 ;p++)
    {
          printf("T[%d]=",p-tableau+1);
          scanf("%d",p);
    }
    minimum(tableau,10,&mini);
    printf("le minimum des elements du tableau vaut :%d",mini);
    return 0;
}
void minimum(int t[] ,int taille,int *minimum)
{
    int i=0;
    *minimum=t[i];
    for(i=1;i<taille;i++)
    {
         if(t[i] < *minimum)
              *minimum=t[i];
    }
}

