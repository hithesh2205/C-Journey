#include <stdio.h>
void main()
{
  int c,d,a;
  printf("enter c value");
  scanf("%d",&c);
  printf("enter d value");
  scanf("%d",&d);
  a=c;
  c=d;
  d=a;
  printf("c value:%d\nd value:%d",c,d);

}
