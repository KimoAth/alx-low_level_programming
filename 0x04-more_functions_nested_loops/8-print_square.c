#include "main.h"
/**
 * print_square - prints square followed by a new line
 * @size: the size of the square
 *
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}