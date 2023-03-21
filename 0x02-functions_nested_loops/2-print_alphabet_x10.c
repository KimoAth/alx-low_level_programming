#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char al;
	while (i < 10)
	{	
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
		i++;
	}	
}
