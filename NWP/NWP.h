
#include <iostream>
#include <stdio.h>

int NWP(int x, int y)
{
  int nwp;
  int result = x / y;
  int rest = (x - (result * y));
  while(1)
  {
    if(rest == 0)
    {
      nwp = y;
      break;
    }
    result = y / rest;
    int temp = rest;
    rest = y - (rest * result);
    y = temp;
  }
  return nwp;
}