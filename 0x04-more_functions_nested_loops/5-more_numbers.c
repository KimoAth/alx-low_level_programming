#include "main.h"

/**
 *
 *
 *
 */
void more_numbers(void)
{
	int t = 0;
	int i;

	while (t < 10)
	{
		for (i = 48; i < 57; i++)
		{
	 		_putchar(i);
		}
		_putchar('\n');	
		t++;
	}
}
