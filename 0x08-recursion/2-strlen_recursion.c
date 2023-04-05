#include "main.h"
/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s:pointer to string
 *Return: the length in ints
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		s++;
		n++;
		n = n + _strlen_recursion(s);
	}
	return (n);
}
