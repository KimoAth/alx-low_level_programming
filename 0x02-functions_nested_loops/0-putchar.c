#include "main.h"
/*
 *main - Entry point
 *@c: The character to print
 *Return: Always 0 (Success)
*/
int main(void)
{
	char car[] = "_putchar";

	int l;

	for(l = 0; l < 8; l++)
	{
		_putchar(car[l]) ;
	}
	_putchar('\n');
	
	return (0);
}
