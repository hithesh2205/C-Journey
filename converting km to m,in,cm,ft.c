#include <stdio.h>
void main()
{
  int km,m,ft,in,cm;
  printf("enter km value");
  scanf("%d",&km);
  m=km*1000;
  cm=m*100;
  in=cm*2.5;
  ft=0.35*m;
  printf("metre-%d\ncm-%d\nin-%d\nft-%d",m,cm,in,ft);
}
