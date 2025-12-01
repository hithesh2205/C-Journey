//else if statements
#include <stdio.h>
void main()
{
 int age;
 scanf("%d",&age);
 if (age>18)
 {
   printf("adult");
 }
 else if (age==18)
 {
   printf("just adult");
 }
 else
 {
   printf("minor");
 }
}
