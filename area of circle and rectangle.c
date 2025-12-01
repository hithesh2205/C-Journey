#include <stdio.h>
void main()
{
  int l,b,a_rec,r;
  float a_cir;
  printf("enter length of rectangle");
  scanf("%d",&l);
  printf("enter breadth of rectangle");
  scanf("%d",&b);
  printf("enter radius of circle");
  scanf("%d",&r);
  a_rec=l*b;
  a_cir=3.14*r*r;
  printf("%d\n",a_rec);
  printf("%f",a_cir);
}
