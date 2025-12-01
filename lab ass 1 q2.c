//Hithesh CB.SC.U4CYS24121
/*Q2. Raja decided to take an auto rickshaw to reduce his cost of travel from office to home. But the
auto rickshaws fare is provided in the basis of miles or feet. As he knows the distances only in kilo
meters.
Write the program to convert and print this distance in miles and feet*/
#include <stdio.h>
void main()
{
  float km,m,ft;
  printf("enter km value");
  scanf("%f",&km);
  m=km/1.6;
  ft=km*3280.84;
  printf("mile-%.4f\nfeet-%.4f",m,ft);
}
