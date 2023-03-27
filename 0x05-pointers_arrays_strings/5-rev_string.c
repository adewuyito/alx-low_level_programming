#include "main.h"
#include <string.h>

/**
*rev_string - Reverse a string
*@s: The string to be reversed
*Return: Void
*/

void rev_string(char *s)
{
int len;
  
len = strlen(s);
for (size_t i = 0; i < len / 2; i++)
{
char temp;
  
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}