#include <stdio.h>
void main()
{
  int a,b,c,d,e;
  a=5;
  b=6;
  c=--b;
  d=b++;
  e=--a;
  printf("%d%d%d%d%d",++a,++b,c,d,e);
}
