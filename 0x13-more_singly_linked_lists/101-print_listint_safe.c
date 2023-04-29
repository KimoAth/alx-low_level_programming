#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, avoiding infinite loops.
 * @head: A pointer to the first node of the linked list to print.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    const listint_t *addresses[1024];
    size_t count = 0, i;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);

        /* Check if the next node is already printed */
        for (i = 0; i < count; i++)
        {
            if (current->next == addresses[i])
            {
                printf("-> [%p] %d\n", (void *)current->next, current->next->n);
                return (count + 1);
            }
        }

        /* Save the address of the current node */
        addresses[count++] = current;

        /* Move to the next node */
        current = current->next;
    }

    return (count);
}
