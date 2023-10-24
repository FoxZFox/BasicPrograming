#include <stdio.h>


void Star(int star)
{
  for (int i = 0; i < star; i++)
  {
    printf("*");
  }
  printf("\n");
}

int main()
{
  int female,male;
  printf("Enter amount of female : ");
  scanf("%d",&female);
  printf("Enter amount of male : ");
  scanf("%d",&male);
  Star(female);
  Star(male);
  return 0;
}