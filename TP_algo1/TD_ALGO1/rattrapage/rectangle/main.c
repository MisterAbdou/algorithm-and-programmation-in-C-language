#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligne ,colonne,i,j;
    do {
        printf("donner le nombre de lignes :");
        scanf("%d",&ligne);
    }while(ligne<0);
        do {
        printf("donner le nombre de colonnes :");
        scanf("%d",&colonne);
    }while(colonne<0);
    i=1;
    while(i<=ligne){
        j=1;
        while(j<=colonne){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
