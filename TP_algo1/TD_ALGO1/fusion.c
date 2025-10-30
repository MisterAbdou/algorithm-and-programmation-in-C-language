#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n1,n2,i,j,k,a,b,c,p;
     int T1[100],T2[100],T3[200];
     do{
      printf("donner le nombre d'element du tableau 1:\n");  
       scanf("%d",&n1);
     }while(n1<0 || n1>=100);

     printf("elements du premier tableau:\n");
     for(i=0;i<n1;i++)
     {
         printf("[%d]=",i);
         scanf("%d",&T1[i]);
     }
    
    do{
      printf("donner le nombre d'element du tableau 2:\n");  
       scanf("%d",&n2);
     }while(n2<0 || n2>=100);
   

     printf("...................\n");
     printf("elements du deuxieme tableau:\n");
     for(j=0;j<n2;j++)
     {
         printf("[%d]=",j);
         scanf("%d",&T2[j]);
     }
    
     k=-1;i=0;j=0;
     while((i<n1) && (j<n2))
     {
         k++;
         if(T1[i]>=T2[j])
         {
             T3[k]=T2[j];
             j++;
         }
         else
         {
             T3[k]=T1[i];

             i++;
         }
     }
     
     //verification des elements restants dans les deux tableaux  (t1 et t2 )pour les completer dans le troisieme tableau
    if(i==n1){
        k+=1;
        for(a=j;a<n2;a++){
             b=a;
          for(c=a+1;c<n2;c++)
              if (T2[c]<T2[b])
                b=c;
        
        if(c!=a){
            T2[p]=T2[a];
            T2[a]=T2[b];
            T2[b]=T2[p];
            T3[k]=T2[b];
            k+=1;
        }
         
        }
    } 
    if (j==n2){
       k+=1;
        for(a=i;a<n1;a++){
             b=a;
          for(c=a+1;c<n1;c++)
              if (T1[c]<T1[b])
                b=c;
        
       if(c!=a){
            T1[p]=T1[a];
            T1[a]=T1[b];
            T1[b]=T1[p];
            T3[k]=T1[b];
        }
         
        k+=1;
    }
    }
      printf("affichage du tableau 3\n");
      for(k=0;k<(n1+n2);k++)
         printf("[%d]=%d\n",k,T3[k]);
      
  return 0;
}