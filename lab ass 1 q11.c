/* Q11.
Harish designed a BMI calculator of his own. It takes input weight in pounds and height in inches and
displays the BMI of the person.
Write a program to design a BMI calculator of same type.
BMI = weight (kg)/ [height (m)]2
Round off to 2 decimal places. */
// 1 kg = 2.2 pounds  1 m=39.3 inch
#include <stdio.h>
void main()
{
  float p,kg,m,in,bmi;
  scanf("%f",&p);
  scanf("%f",&in);
  kg=p/2.2;
  m=in/39.3;
  bmi=kg/(m*m);
  printf("%f",bmi);
}
