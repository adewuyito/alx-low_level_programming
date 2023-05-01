#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: The pointer to the head of the linked list
 *
 * Return: A pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}

