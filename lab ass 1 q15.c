//Hithesh CB.SC.U4CYS24121
/*Q.15. Ram distributes C chocolates to school of N students.C chocolates are distributed
among N students equally and remaining chocolates R are given back to Ram.Help the
school to calculate the number of Chocolates to be given back when C and N are passes as
input.*/

#include <stdio.h>
void main()
{
  int c,n,a,b,d;
  scanf("%d",&c);
  scanf("%d",&n);
  a=c/n;
  b=a*n;
  d=c-b;
  printf("each student received %d chocolates and ram has %d remaining with him",a,d);
}

