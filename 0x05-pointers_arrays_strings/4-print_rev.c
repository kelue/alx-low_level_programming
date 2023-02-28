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

	if (*str == 0)
	{
		printf("\n");
		return;
	}

	c = *str;

	do {
		str = str + 1;
	} while (*str != '\0');

	str = str - 1;

	do {
		printf("%c", *str);
		str = str - 1;
	} while (*str != c);

}
