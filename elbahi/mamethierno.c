#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int  nombre,i,somme,rest_du_nombre,rest_temp,nb;
    do
    {
        printf("donner un nombre:");
        scanf("%d",&nombre);
    } while (nombre<0);
    i=1;somme=0;
    while (nombre != 0)
    {
        rest_du_nombre=nombre%10;
        nb=0;
        rest_temp=rest_du_nombre;
        while(rest_temp==0)
        {
            nb++;
            nombre/=10;
            rest_temp=nombre%10;
            rest_du_nombre=nb;
        }
        somme+=(rest_du_nombre*i);
        i=i*10;
        if(nb==0)
        nombre/=10;
    }
    printf("la nouvelle valeur est :%d",somme);
    return 0;  
}