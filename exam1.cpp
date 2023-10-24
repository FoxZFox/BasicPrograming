#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  int set = 0;
  int price1 = 55 , price2 = 199,price3 = 239;
    printf("* Set 1 : Domut[1], Pepsi[1]                                 *\n");
    printf("* Set 2 : French Fries[1], Pepsi[2], Hamburger[2]            *\n");
    printf("* Set 3 : Chiclen [2], French Fries[2], Pepsi[4]             *\n");
    printf("Select set : ");
    scanf("%d",&set);
    printf("You set is Set[%d]\n",set);
    switch (set)
    {
    case 1:
      printf("Domut[1], Pepsi[1]\n");
      printf("Price: %d Bath\n",price1);
      break;
    case 2:
      printf("French Fries[1], Pepsi[2], Hamburger[2]\n");
      printf("Price: %d Bath\n",price2);
      break;
    case 3:
      printf("Chiclen [2], French Fries[2], Pepsi[4]\n");
      printf("Price: %d Bath\n",price3);
      break;
    default:
      break;
    }
  
  return 0;
}