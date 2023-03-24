#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int i, d, x = n;
	double t = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			x = n * -1;
			_putchar('-');
		}

		while (t <= x)
			t *= 10;
		i = t / 10;

		while (i >= 1)
		{
			d = x / i;
			_putchar(d + '0');
			x = (x - (i * d));
			i /= 10;
		}
	}
}
