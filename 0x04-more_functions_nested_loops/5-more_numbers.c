#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int t = 0;
	int i;

	while (t < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');	
		t++;
	}
}
