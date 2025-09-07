 #include <stdio.h>
int gauche(int n){
    int r = n,i = 1,retour = 0;
    while ((r/10) != 0){
         retour += i*(r % 10);
         r /= 10;
         i*=10;
    }
     printf("%d\t",r);
     return retour;
}
int main(){
    int a;
    printf("Entrez un nombre: ");
    scanf("%d",&a);
    printf("affichage de %d de gauche a droite :\n",a);
    while (a)
        a = gauche(a);
    return 0;
}
