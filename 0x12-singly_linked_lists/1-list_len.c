#include "lists.h"

/**
 * list_len - Prints the lent of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The lenght of the list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
