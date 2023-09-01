#include "main.h"

/**
 * flip_bits - number of bits to flip between two numbers
 * @n: The first in number
 * @m: The second in number
 * return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int flips = 0;
    unsigned long int num = n ^ m;

    while (num > 0)
    {
        flips += (num & 1);
        num = num >> 1;
    }

    return (flips);

}
