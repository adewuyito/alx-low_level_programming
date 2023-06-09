#include "lists.h"

/**
 * pop_listint - Pops a node from a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The pointer of the popped linked list
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

