#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

        int i;
        long int d;
	long long int s;
        char c;
	float f;

        printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of an int : %lu byte(s)\n",(unsigned long)sizeof(i));
        printf("Size of long int : %lu byte(s)\n",(unsigned long)sizeof(d));
       printf("Size of long long int : %lu byte(s)\n",(unsigned long)sizeof(s));
       printf("Size of a float : %lu byte(s)\n",(unsigned long)sizeof(f));
       	return (0);
}
