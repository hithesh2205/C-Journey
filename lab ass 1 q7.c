/*Q7 .Abinaya wants to check the mathematical skills of Swetha and Savitha. She asks
Swetha and Savitha to swap two numbers without using the third variable. Help them to
swap two numbers without using the third variable.*/
#include <stdio.h>
void main()
{
  int x,y;
  printf("enter x value");
  scanf("%d",&x);
  printf("enter y value");
  scanf("%d",&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("x=%d,y=%d",x,y);

}
