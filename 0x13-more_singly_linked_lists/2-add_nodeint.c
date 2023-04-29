#include "lists.h"

/**
 * add_nodeint - Add's a new node to the start of the linked list
 * @head: A pointer to the head of the list
 * @n: The Data of the new node
 *
 * Return: A pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

