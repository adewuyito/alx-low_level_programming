#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A pointer to the head of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}

