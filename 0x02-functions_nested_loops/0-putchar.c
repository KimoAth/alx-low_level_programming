#include "main.h"
/**
 * main - Entry point
 * @c: The character to print
 * Return: Always 0 (Success)
*/
int main(void)
{
	char car[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(car[c]);
	}
	_putchar('\n');
	return (0);
}
