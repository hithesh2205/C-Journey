//HITHESH CB.SC.U4CYS24121
/*Q3. Raman is a Civil Engineer. He is writing software to automate his work. As a part of his
requirement, he wants to calculate the circle diameter, circumference, and area. Help Raman to
complete his task. Get radius as input.*/
#include <stdio.h>
void main()
{
  float r,c,a,d;
  printf("enter radius");
  scanf("%f",&r);
  c=2*3.14*r;
  a=3.14*r*r;
  d=2*r;
  printf("circumference-%f\narea-%f\ndiameter-%f",c,a,d);
}
