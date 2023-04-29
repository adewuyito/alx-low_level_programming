#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A pointer to the head of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

