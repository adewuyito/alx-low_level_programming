#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Pointer to the head of the list
 * @str: Data of the linked list
 *
 * Return: pointer to the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}

	return (newNode);
}
