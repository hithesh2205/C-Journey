#include <stdio.h>
#include <math.h>
void main(){
   int a,b,len,a1,c,d,rev;
   len=0;
   rev=0;
   printf("enter a num");
   scanf("%d",&a);
   a1=a;
   b=1;
   while (a>0){
      len=len+1;
      a=a/10;
   }
   c=pow(10,len-1);
   reverse(a1,b,d,c,rev);
}
void reverse(a1,b,d,c,rev){
     while (a1>0){
        d=a1%10;
        b=d*c;
        rev=rev+b;
        a1=a1/10;
        c=c/10;

   }
   printf("%d",rev);
}


