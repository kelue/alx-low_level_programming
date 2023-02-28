#include "main.h"

/**
* print_rev - function that prints a string in reverse
*
*
* Return: always 0
*/

void print_rev(char *s)
{
	char c;

	if (*s == 0)
	{
		printf("\n");
		return;
	}

	c = *s;

	do {
		s = s + 1;
	} while (*s != '\0');

	s = s - 1;

	do {
		printf("%c", *s);
		s = s - 1;
	} while (*s != c);

}
