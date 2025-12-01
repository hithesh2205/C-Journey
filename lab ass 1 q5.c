//HITHESH CB.SC.U4CYS24121
/*Q5. Pragya, a maths teacher has started to learn the C programming language. She writes a program
to do basic arithmetic operations. Help Pragya to complete her first program*/
#include <stdio.h>
void main()
{
  float a,b,add,sub,multi,div;
  printf("enter a value");
  scanf("%f",&a);
  printf("enter b value");
  scanf("%f",&b);
  add=a+b;
  sub=a-b;
  multi=a*b;
  div=a/b;
  printf("add=%f\nsub=%f\nmulti=%f\ndiv=%f",add,sub,multi,div);
}
