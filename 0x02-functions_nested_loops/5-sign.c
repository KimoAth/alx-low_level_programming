#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: takes in an integer
 * Return: 1 if n is > zero, 0 if n is zero, -1 if n is < zero
 */
int print_sign(int n)
{
	if (n>0)
	{
		printf("+");
		return (1);
	}
	else
	{
		print("-");
		return(0);
	}
}
