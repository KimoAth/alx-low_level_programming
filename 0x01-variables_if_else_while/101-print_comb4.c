#include <stdio.h>
/**
*main - Prints all combinations of three digits ..
*
*Return: returns 0
*/
int main(void)
{
	int di1, di2, di3;

	for (di1 = 0; di1 < 9; di1++)
	{
		for (di2 = di1 + 1; di2 < 9; di2++)
		{
			for (di3 = di2 + 1; di3 < 10; di3++)
			{

				putchar((di1 % 10) + '0');
				putchar((di2 % 10) + '0');
				putchar((di3 % 10) + '0');

				if (di1 == 7 && di2 == 8 && di3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
