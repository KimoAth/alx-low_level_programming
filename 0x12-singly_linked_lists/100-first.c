#include <stdio.h>
/**
 * before_main - print a message before the main function is execute.
 *
 * Return: nothing.
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
