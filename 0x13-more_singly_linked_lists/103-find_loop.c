#include "lists.h"

/**
 * find_listint_loop - Finds the node where a loop starts in a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: If there is no loop, NULL.Otherwise, a pointer to the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = hare = head;
	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise && hare)
			{
				if (tortoise == hare)
					return (tortoise);
				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
	}
	return (NULL);
}
