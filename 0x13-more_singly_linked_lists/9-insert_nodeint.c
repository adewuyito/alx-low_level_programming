#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index of a linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node
 * @n: The node data
 *
 * Return: A pointer to the node of the linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp = *head;
	listint_t *tempNext = NULL;
	listint_t *newNode;
	unsigned int count;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (index == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	for (count = 0; count < index && temp != NULL; count++)
	{
		tempNext = temp;
		temp = temp->next;
	}
	if (temp == NULL || index > 0)
	{
		free(newNode);
		return (NULL);
	}

	tempNext->next = newNode;
	newNode->next = temp;

	return (newNode);
}
