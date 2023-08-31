#include "main.h"

/**
 * set_bit - sets bit at an index to 1
 * @n: The  number
 * @find: The index in number
 * return: the number
 */
int set_bit(unsigned long int *n, unsigned int find)
{
	int mask = 1 << find;

	return (*n | mask);
}
