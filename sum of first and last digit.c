#include <stdio.h>
void main()
{
  int a,b,c,sum;
  printf("enter a four digit number");
  scanf("%d",&a);
  b=a%10;
  while (a>10)
  {
    c=a%10;
    a=a/10;
  }
  sum=a+b;
  printf("sum of first and last digit-%d",sum);
}
