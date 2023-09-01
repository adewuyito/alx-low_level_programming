#include "main.h"

/**
 * get_bit - get the bit at an index
 * @n: the int number
 * @find: The index in number
 * return: the bit
 */
int get_bit(unsigned long int n, unsigned int find)
{
    int binary[16] = {0};
    unsigned long int num = n;
    int msb_found = 0;
    int i;

    if (find > 16 || num == NULL)
    {
        return (-1);
    }

    for (i = 16; i >= 0; i--)
    {
        int mask = (1 << i);

        if (num & mask)
        {
            binary[i] = 1;
            msb_found = 1;
        }
        else if (msb_found)
        {
            binary[i] = 0;
        }
        else if(num == 0)
        {
            binary[i] = 0;
            break;
        }
    }

    return (binary[find]);
}
