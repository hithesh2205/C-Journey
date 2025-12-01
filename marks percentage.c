#include <stdio.h>
void main()
{
  int m1,m2,m3,m4,m5,total;
  float percentage;
  scanf("%d",&m1);
  scanf("%d",&m2);
  scanf("%d",&m3);
  scanf("%d",&m4);
  scanf("%d",&m5);
  total=m1+m2+m3+m4+m5;
  percentage=(total*100.0)/500;
  printf("marks-%d \n",total);
  printf("percentage-%f",percentage);
}
