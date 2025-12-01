//In a town, the percentage of men is 52. The percentage of total literacy is 48.
//If total percentage of literate men is 35 of the total population,
//write a program to find the total number of illiterate men and women if the population of the town is 80,000.
#include <stdio.h>
void main()
{
  int pmen,pwomen,nmen,nwomen,lmen,lwomen,popu,liter,literm,literw,illiterm,illiterw;
  popu=80000;
  pmen=52;
  pwomen=100-pmen;
  nmen=popu*(52.0/100);
  nwomen=popu-nmen;
  liter=popu*(48.0/100);
  literm=popu*(35.0/100);
  literw=liter-literm;
  illiterm=nmen-literm;
  illiterw=nwomen-literw;
  printf("the no of illiterate men-%d\nthe number of illiterate women-%d",illiterm,illiterw);
}
