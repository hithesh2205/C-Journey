/*Q10.Given the total number of Legs and Head of Animals and Birds. Write C Code
to calculate the total number of Animals and Birds.
Input: Heads = 200, Legs = 540
Output: Animals = 70, Birds = 130*/

#include <stdio.h>
void main()
{
  int h,l,a,b;
  scanf("%d",&h);
  scanf("%d",&l);
  // 2b+4a=l
  // a+b=h
  // b=h-a
  // 2(h-a)+4a=l
  a=(l-2*h)/2;
  b=h-a;
  printf("%d %d",a,b);

}
