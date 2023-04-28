#include "lists.h"

/**
 * add_node - Adds a node to the start of a linked list
 * @head: The head of the list
 * @str: Data of the linked list
 *
 * Return: Pointer to the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int len = strlen(str);

	if (!newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
