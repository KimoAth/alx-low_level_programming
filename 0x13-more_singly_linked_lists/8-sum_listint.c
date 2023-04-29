#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a listint_t list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all the data in the list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
