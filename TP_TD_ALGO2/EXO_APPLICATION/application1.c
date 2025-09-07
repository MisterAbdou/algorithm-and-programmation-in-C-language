#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int puissance(int x,int y)
{
    int i;
    int p=1;
    if (y==0)
    {
      return 1;
    }
    for(i=1;i<=y;i++)
    {
         p=p*x;
    }
     return p;
}
// int Pow(int n, int p) {
//      if (p == 0) return 1;
//      return n * Pow(n, p-1);
// }
int conversion(int n)
{
     int i=0,s=0;
    while(n>0)
    {
         s+=((n%10)*puissance(2,i));
         i++;
         n/=10;
    }
    return s;
}
int main()
{
     long long int n_binaire;
     int nombre,Puissance;
     printf("donner un nombre:");
     scanf("%d",&nombre);
     printf("donner sa puisance:");
     scanf("%d",&Puissance);
     printf("donner un nombre binaire:");
     scanf("%lld",&n_binaire);
    //  appel a la fonction
     printf("%d a la puissance %d est egale a : %d  \n",nombre,Puissance,puissance(nombre,Puissance));
     printf("%lld represente en decimale :%d\n",n_binaire,conversion(n_binaire));
     return 0;
}