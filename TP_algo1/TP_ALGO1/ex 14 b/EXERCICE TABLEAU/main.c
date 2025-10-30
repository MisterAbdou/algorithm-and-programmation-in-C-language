#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N= 40000;
    int T[N];
    int i=0,max1,max2;
    do {
    printf("entrez une note comprise entre 0 et 20\n");
    scanf("%d",&T[i]);}while(T[i]<0 || T[i]>20);
    i++;
    while(T[i-1]!=-1 && i<N){
            do{
    printf("entrez une autre note\n");
    scanf("%d",&T[i]);} while (T[i]>20);
    i++;
    }

    i=0,max1=0,max2=0;
    while (i<N && T[i]!=-1){
        if((T[i]>max1) && (T[i]>max2)){
            max2=max1;
            max1=T[i];
        }
        else if((T[i]<max1) && (T[i]>max2)){
            max2=T[i];
        }
        i++;

    }
    printf("les deux meilleures notes : %d et %d",max1,max2);




    return 0;
}
