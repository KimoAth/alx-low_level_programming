#include <stdio.h>
#include <ctype.h>
/**
*main - Print alphabet lets in reverse
*
*Return: return 0
*/
int main(void)
{
	int let;

	for (let = 'z'; let >= 'a'; let--)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
