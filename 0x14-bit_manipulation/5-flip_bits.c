#include "main.h"

/**
 * flip_bits - number of biits to flip between two numbers
 * @n: The first in number
 * @m: The second in number
 * return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int msb_found1 = 0;
	int msb_found2 = 0;
	int binary1[16] = {0};
	int binary2[16] = {0};
	int running_amount = 0;

	for (int i = 16; i >= 0; i--)
	{
		int mask = (1 << i);

		if (n & mask)
		{
			binary1[i] = 1;
			msb_found1 = 1;
		}
		else if (msb_found1 || n == 0)
		{
			binary1[i] = 0;
		}

		if (m & mask)
		{
			binary2[i] = 1;
			msb_found2 = 1;
		}
		else if (msb_found2 || m == 0)
		{
			binary2[i] = 0;
		}

		if (binary1[i] != binary2[i])
		{
			running_amount++;
		}
	}

	return (running_amount);
}