#include "lists.h"
#include <stdint.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num = 0;
    intptr_t diff;

    while (head)
    {
        diff = (intptr_t)head - (intptr_t)head->next;
        num++;
        printf("[%p] %d\n", (void *) (intptr_t) head, head->n);
        if (diff > 0)
            head = head->next;
        else
        {
            printf("-> [%p] %d\n", (void *) (intptr_t) head->next, head->next->n);
            break;
        }
    }

    return (num);
}
