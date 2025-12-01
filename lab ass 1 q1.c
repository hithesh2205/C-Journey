//Hithesh CB.SC.U4CYS24121
/* Q1. If a five-digit number is input through the keyboard, write a program to print a new number
by adding one to each of its digits. For example, if the number that is input is 12391 then the
output should be displayed as 23402. */

#include <stdio.h>
void main()
{
  int a,l,d,newnum;
  newnum=0;
  l=10000;
  printf("enter a five digit number");
  scanf("%d",&a);
  while (a>0)
  {
    d=a/l;
    if (d==9)
    {
        newnum=newnum*10;
    }
    else
    {
        newnum=newnum*10+(d+1);
    }
    a=a%l;
    l=l/10;
  }
  printf("%d",newnum);
}
