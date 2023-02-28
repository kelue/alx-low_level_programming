#include "main.h"

/**
* print_rev - function that prints a string in reverse
* @s: pointer to string to be reversed
*
* Return: always 0
*/

void print_rev(char *s)
{
	int i = 0;

	if (*s == 0)
	{
		printf("\n");
		return;
	}

	do {
		i++;
		s = s + 1;
	} while (*s != '\0');

	s = s - 1;

	do {
		printf("%c", *s);
		s = s - 1;
		i--;
	} while (i != 0);

	printf("\n");

}
