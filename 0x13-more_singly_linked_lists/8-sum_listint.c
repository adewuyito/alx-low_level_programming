#include "lists.h"

/**
 * sum_listint - Sum's the data in a linked list of integers
 * @head: A pointer to the head of the list
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
