#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 * Return: pointer of the new node added to linked list, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = current_node->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
/**
 * _strlen - computes the length of a string.
 * @str: pointer to the string.
 *
 * Return: Length of the string.
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
