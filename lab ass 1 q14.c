/* Q14 Arvinth is working as a lorry driver under a company. He has to calculate every day's
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.
and submit to his company to get his allowances
Daily driving cost = (Total miles / Miles per gallon)* gasoline price + parking fees + Tolls.*/

#include <stdio.h>
void main()
{
  float miles,cost,avg,pfees,tolls,gallonreq,costfuel,total;
  printf("enter miles");
  scanf("%f",&miles);
  printf("enter cost");
  scanf("%f",&cost);
  printf("enter fuel avg");
  scanf("%f",&avg);
  printf("enter parking fees");
  scanf("%f",&pfees);
  printf("enter toll fees");
  scanf("%f",&tolls);
  gallonreq=miles/avg;
  costfuel=gallonreq*cost;
  total=costfuel+pfees+tolls;
  printf("total money-%.2f",total);

}
