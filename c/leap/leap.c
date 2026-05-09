#include "leap.h"

/*  Occurs every year evenly divisible by 4*/
// If divisible by 100, not leap unless...
// Also divisible by 400
// Don't forget boolean module!!
#include <stdbool.h>
bool leap_year(int year) {
  if ((year % 400) == 0)
    {
      return true;
    }
  if (year % 100 == 0)
  {
    return false;
  }
  if (year % 4 == 0)
    {
    return true;
  }
  return false;
}
