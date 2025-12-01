/* Q12 Keerthana is learning about units and tens digit in school. Her teacher gives a task for find the sum of
the units and tens digit of any given number.
For example, in 231, 1 is the units digit and 3 is tens digit. Hence the sum is 4.*/

#include <stdio.h>
void main()
{
  int a,d,n,sum;
  sum=0;
  scanf("%d",&a);
  n=0;
  while (n<2){
      d=a%10;
      sum=sum+d;
      n=n+1;
      a=a/10;
  }
  printf("%d",sum);
}
