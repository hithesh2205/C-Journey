/* Q9 A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard in hundreds, find the total number of currency
notes of each denomination the cashier will have to give to the withdrawer. */
#include <stdio.h>
void main()
{
  int x,ten,fifty,hundred;
  scanf("%d",&x);
  while (x>0)
  {
    hundred=x/100;
    x=x%100;
    fifty=x/50;
    x=x%50;
    ten=x/10;
    x=x%10;
  }
  printf("hundred-%d",hundred);
  printf("fifty-%d",fifty);
  printf("ten-%d",ten);
}

