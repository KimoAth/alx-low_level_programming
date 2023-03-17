#include <stdio.h>
#include <ctype.h>
/**
*main - print alphabet letter
*
*Return: return 0
*/
int main(void)
{
	int let;
	for (let = 'a'; let <= 'z'; let++)
	{
		let = tolower(let);
		putchar(let);
	}
	putchar('\n');
	return (0);
}
