#include <stdio.h>
void main()
{
  int x = 5;

  printf("%d", x++);  // Output: 5, then x becomes 6
  printf("%d", --x);  // x becomes 5, then output: 5
  printf("%d", ++x);  // x becomes 6, then output: 6
  printf("%d", x--);  // Output: 6, then x becomes 5
}
