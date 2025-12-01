#include <stdio.h>
void main()
{
  int gs,bs,dra,hra;
  printf("enter basic salary");
  scanf("%d",&bs);
  dra=(40*bs)/100;
  hra=(20*bs)/100;
  gs=dra+hra;
  printf("dra-%d\nhra-%d\ngs-%d",dra,hra,gs);
}
