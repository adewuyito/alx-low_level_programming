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

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

