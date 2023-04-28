#include "lists.h"

/**
* free_list - frees the memory of a linked list
* @head: Pointer to the head
*
* Return: Void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
