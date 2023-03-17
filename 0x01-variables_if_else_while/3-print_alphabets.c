#include <stdio.h>
#include <ctype.h>
/**
*main - print alphabet lets in all cases
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
		if (let == 'z')
		{
			let = 'A';
			for (; let <= 'Z'; let++)
			{
				putchar(let);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
