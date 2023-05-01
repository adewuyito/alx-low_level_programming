#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at index of a linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node
 *
 * Return: (1) if successful or (-1) otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *tempNext = NULL;
	unsigned int count;

	for (count = 0, temp = *head; temp != NULL && count < index; count++)
	{
		tempNext = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{

		tempNext->next = temp->next;
	}
	free(temp);

	return (1);
}

