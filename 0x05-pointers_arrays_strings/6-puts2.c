#include "main.h"

/**
*puts2 - Pronts every other char in a string
*@str: String to print
*Return: Void
*/


void puts2(char *str)
{
int i;

i = 0;
while (str[i] != '\n')
{
if (i % 2 != 0)
{
i++;
}
else
{
_putchar(str[i] + '0');
i++;
}
}
_putchar('\n');
}