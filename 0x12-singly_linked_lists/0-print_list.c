#include "lists.h"

/**
 * print_list - Prints the data of linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The amount of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{

		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", head->len, head->str);
		}
		head = head->next;
		i++;
	}

	return (i);
}
