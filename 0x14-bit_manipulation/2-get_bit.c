#include "main.h"

/**
 * get_bit - get the bit at an index
 * @n: the int number
 * @find: The index in number
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int find)
{
	if (find >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> find) & 1);
}
