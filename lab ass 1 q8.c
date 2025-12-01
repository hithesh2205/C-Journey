/* q8 There are 3 friends named Tony,Ram,Sam who worked together. After their work, they spent their
money. Given their salaries and expenditures, find the friend who has more money.*/
#include <stdio.h>
void main()
{
  int s1,s2,s3,e1,e2,e3,r1,r2,r3;
  scanf("%d",&s1);
  scanf("%d",&s2);
  scanf("%d",&s3);
  scanf("%d",&e1);
  scanf("%d",&e2);
  scanf("%d",&e3);
  r1=s1-e1;
  r2=s2-e2;
  r3=s3-e3;
  if (r1>r3)
  {
    if (r1>r2)
    {
        printf("person 1 has more money %d",r1);
    }
  }
  if (r3>r3)
  {
      if (r2>r3)
      {
          printf("person 2 has more money %d",r2);
      }
  }
  if (r3>r1)
  {
      if (r3>r2)
      {
          printf("person 3 has more money %d",r3);
      }
  }
}





