#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// methode iterative
 bool palindrome(int t[])
{
     int i=0;
     while((i < 4-i) && (t[i]==t[4-i]))
     {
            i++;
     } 
     if( i>= 4-i){
            return true;
     }
     else
      return false;
}
 
 // methode recursive
  bool palindrome_recursive(int t[])
   {
         static int i=0;
         if( i< 4-i)
         {
              if(t[i] != t[4-i]){
                     return false;
              }
              else{
                     i++;
                     palindrome_recursive(t);
              }
         }
         else
              return true;
   }
int main()
{
     int tab[5];
     int i=0;
     for( i=0; i< 5; i++)
     {
          printf("element %d",i+1);
          scanf("%d",&tab[i]);
     }
     bool x= palindrome(tab) ;
     if(x == true)
     {
             printf(" palindrome\n");
     }
     else{
            printf("pas de palindrome\n");
     }
   return 0;
}