#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion -  function that prints a string in reverse.
 * @s: string that gonna be writen 
*/
void _print_rev_recursion(char *s)
{
	if(s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(s[0]);
	}
}

