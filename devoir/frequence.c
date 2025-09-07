#include<stdio.h>
#include<stdlib.h>
int main(){
    int nb,i, s, rest ,r ;
    long long n;
    do{
         printf("donner un nombre entier :");
         scanf("%d",&n);
    }while(n<0);
    s=0;i=1;
    while(n !=0)
    {
        nb=0;
        r=n%10;
        rest=r;
        while(r==0){
            nb++;
            rest=nb;
            n/=10;
            r=n%10;
        }
        s+=(rest*i);
        i*=10;
        if(nb==0)
        {
            n/=10;
        }
    }
    printf("on aura :%d",s);
    return 0;
}