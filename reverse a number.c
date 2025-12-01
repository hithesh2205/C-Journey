#include <stdio.h>
void main()
{
  int a,b,sum;
  scanf("%d",&a);
  while (a>0)
  {
    b=a%10;
    sum=(sum*10)+b;
    a=a/10;
  }
  printf("%d",sum);

}
