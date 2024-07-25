#include <stdio.h>

int main(void) {
  double miles = 35.5;
  double kilometers = miles*1.60934;
  printf("The distance of %.2f miles is equal to %.2f kilometers.\n",miles,kilometers);
  return 0;
}