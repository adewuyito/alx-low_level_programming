#include "main.h"

/**
*swap_int - Swaps two input variables 
*@a: First int to swap
*@b: Second int to swap
*Return: Void
*/

void swap_int(int *a, int *b)
{
  int x, y;

x = *a;
y = *b;
*a = y;
*b = x;
}