#include "main.h"

/**
 * clear_bit - set the bit at an indec to 0
 * @n: The first in number
 * @find: The index in number
 * return: the number
 */
int clear_bit(unsigned long int *n, unsigned int find)
{
    if (find > 63)
    {
        return (-1);
    }
    
    *n = *n & ~(1 << find);

    return (1);
}
