#include "main.h"

/**
 * print_line - draws a stright line
 *
 * @n: integer number
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
