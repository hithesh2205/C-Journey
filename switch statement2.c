#include <stdio.h>
void main()
{
  char day; // 1-mon 2-tues 3-wed....
  scanf("%s",&day);
  switch (day)
  {
    case 'm':printf("monday");
           break;
    case 't':printf("tuesday");
           break;
    case 'w':printf("wednesday");
           break;
    case 'T':printf("thrusday");
           break;
    case 'f':printf("friday");
           break;
    case 's':printf("saturday");
           break;
    case 'S':printf("sunday");
           break;
  }
}

