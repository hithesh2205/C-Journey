//enter number untill it is composite
#include <stdio.h>
void main(){
   int a,n,i;
   scanf("%d",&a);
       for (i=1;i<=a;i++){
           if (a%i==0){
                n=n+1;
           }
       }
   while (n==2){
       scanf("%d",&a);
       n=0;
       for (i=1;i<=a;i++){
           if (a%i==0){
                n=n+1;

           }
       }

   }
}
