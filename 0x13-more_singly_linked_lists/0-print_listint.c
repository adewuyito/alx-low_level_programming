#include "lists.h"

/**
 * print_listint - Prints a linked-list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
        count++;
		printf("%u\n", h->n);
		h = h->next;
	}

	return (count);
}

