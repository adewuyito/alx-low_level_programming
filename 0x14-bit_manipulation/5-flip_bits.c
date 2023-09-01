#include "main.h"

/**
 * flip_bits - number of bits to flip between two numbers
 * @n: The first in number
 * @m: The second in number
 * return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, j = 0, k = 0;

    while (n > 0 || m > 0)
    {
        if ((n & 1) != (m & 1))
        {
            i++;
        }
        n = n >> 1;
        m = m >> 1;
    }
    while (i > 0)
    {
        j = i & 1;
        k = k + j;
        i = i >> 1;
    }
    return (k);
}
