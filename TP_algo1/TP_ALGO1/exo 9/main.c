#include <stdio.h>
int main()
{
    int  n;
    do{
    printf("entrez un nombre compris entre 0 et 999:");
    scanf("%d",&n);
    }while( (n<0 )||(n >=1000));

    const char *unites []= {"zero","un","deux","trois","quatre","cinq","six","sept","huit","neuf"};
    const char *nombre10ET19[]={"dix","onze","douze","treize","quatorze","quinze","seize","dix sept","dix huit","dix neuf"};
    const char *dizaines[]={"","","vingt","trente","quarante","cinquante","soixante","soixante dix","quatre vingt","quatre vingt dix"};
    const char *centaines[]={"","cent","deux cent","trois cent","quatre cent","cinq cent","six cent","sept cent","huit cent","neuf cent"};


    int c=n/100;
    int d=(n%100)/10;
    int u=n%10;
    if (c>0 ){
        printf("%s ",centaines[c]);
    }
    if ((d==1) &&(u>=0)){
        printf("%s ",nombre10ET19[u]);
    }
    if((d>1) && (u>0)){
        printf("%s %s",dizaines[d],unites[u]);
    }
    if((d==0)&& (u>0)){
        printf("%s",unites[u]);
    }


    if(c==0 && d==0 && u==0){
        printf("zero");
    }
    return 0;
}


