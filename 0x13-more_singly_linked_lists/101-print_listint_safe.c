#include "lists.h"


/**
 * print_listint_safe - Prints a looped linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *currentNode = head, *temp;

	while (currentNode != NULL)
	{
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		count++;
		temp = currentNode;
		currentNode = currentNode->next;

		/* Check for loop */
		if (currentNode >= temp)
		{
			printf("-> [%p] %d\n", (void *)currentNode, currentNode->n);
			break;
		}
	}

	return (count);
}

