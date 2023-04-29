#include "lists.h"

/**
 * get_nodeint_at_index - Get a node int at index in a linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node
 *
 * Return: A pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = NULL;
	while (head != NULL)
	{
		if (count == index)
		{
			temp = head;
		}
		head = head->next;
		count++;
	}
	return (temp);
}

