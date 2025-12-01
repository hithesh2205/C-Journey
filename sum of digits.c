#include <stdio.h>
void main()
{
 int a,b,sum;
 sum=0;
 printf("enter a 5 digit number");
 scanf("%d",&a);
 while (a>0)
 {
   b=a%10;
   sum=sum+b;
   a=a/10;
 }
 printf("the sum is-%d",sum);
}
