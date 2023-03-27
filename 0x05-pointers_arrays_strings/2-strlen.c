#include "main.h"
/**
*_strlen - Gets the lentg of a string
*@s: The string to check
*return: The lenght of string
*/

int _strlen(char *s)
{
  int string;
  int count;

  count = 0;
  string = *s;
  while (string != '\0')
    {
      count++;
      string++;
    }
  return (count);
}