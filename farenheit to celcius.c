#include <stdio.h>
void main()
{
  float f,c;
  printf("enter temperature in fareinheit");
  scanf("%f",&f);
  c=(f-32.0)*5/9;
  printf("celcius-%f",c);
}
