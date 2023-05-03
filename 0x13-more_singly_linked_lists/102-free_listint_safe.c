#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the size of the list freed in bytes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0, total = 0;
	listint_t *current = *head, *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;

		/* Check for loop */
		if (current >= temp)
		{
			break;
		}
	}

	total = count * sizeof(listint_t);
	head = NULL;

	return (total);
}

