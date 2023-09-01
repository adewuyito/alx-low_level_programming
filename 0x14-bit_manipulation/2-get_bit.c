#include "main.h"

/**
 * get_bit - get the bit at an index
 * @n: the int number
 * @find: The index in number
 * return: the bit
 */
int get_bit(unsigned long int n, unsigned int find)
{
	if (n & (1 << find))
		return (1);
	else
		return (0);
}
