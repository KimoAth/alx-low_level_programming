#include <stdio.h>
#include <ctype.h>
/**
*main - print alphabet lets except q and e 
*
*Return: return 0
*/
int main(void)
{

	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let == 'q' || let == 'e')
		{
			continue;
		}
		
		putchar(let);
	}

	putchar('\n');
	
	return (0);
}
