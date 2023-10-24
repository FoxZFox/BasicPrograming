#include <stdio.h>

int main()
{
  char month[12][255] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
  for (size_t i = 1; i <= 12; i++)
  {
    printf("month %d : %s\n",i,month[i-1]);
  }
  
  return 0;
}