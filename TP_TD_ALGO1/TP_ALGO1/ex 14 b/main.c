#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=10000,t=5000;
    int tab1[n],tab2[t],i=0,j,k,compt,count,p;
    printf("entrer un nombre entier :");
    scanf("%d",&tab1[i]);
    i++;
    while(i<n && tab1[i-1]!=-1){
        printf("entrer un autre entier :");
        scanf("%d",&tab1[i]);
        i++;
    }
    p=i;
    i=0,j=0;

    while(i<p ){
         tab2[j]=tab1[i];
        i=i+2;
        j++;}
    compt=j;
    printf("TABLEAU 2\n");
    j=0;
    while(j<compt && tab2[j]!=-1){
        printf("%d\t",tab2[j]);
        j++;
    }
    i=1,k=0;
    while(i<p){
        tab1[k]=tab1[i];
        i=i+2;
        k++;
    }
    count=k;
    printf("\nTABLEAU 1\n");
    k=0;
    while(k<count && tab1[k]!=-1){
        printf("%d\t",tab1[k]);
        k++;
    }
    return 0;
}
