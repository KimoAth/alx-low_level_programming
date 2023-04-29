#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the list_t.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			free(current);
			break;
		}
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*h = NULL;
	return (count);
}
