#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n,m,reste;
     char c=' ',lettre;

     printf("donner un nombre quelconque:");
     scanf("%d",&n);
     m=n;
     while(n!=0)
     {
        reste=n%10;
        lettre='A';
        while(lettre <= 'Z' && lettre != ('A'+reste))
        {
            lettre=lettre+1;
        }
        if(lettre !='Z')
        {
            c &= lettre;
        }
        n/=10;
     }
      printf("%d represente en lettre %c",m,c);
 return 0;
}
