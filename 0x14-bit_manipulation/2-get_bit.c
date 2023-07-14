#include "main.h"

int get_bit(unsigned long int n, unsigned int find) {
  int foundBit;
  int binary[33];
  unsigned long int decimal = n;
  int index = 0;

  if (find < 0) 
  {
    return (-1);
  }
  for (int i = 0; i < sizeof(binary) / sizeof(int); i++)
  {
    binary[i] = -1;
  }
  if (decimal == 0)
  {
    binary[index++] = 0;
  }
  else
  {
    while (decimal > 0) {
      binary[index++] = (decimal % 2);
      decimal = decimal / 2;
    }
  }

  binary[index] = '\0';
  foundBit = binary[find];

  return (foundBit);
}
