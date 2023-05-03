#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: a pointer to the node where the loop starts,
 * or NULL if no loop is found
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return ((listint_t *)fast);
		}
	}

	return (NULL);
}

