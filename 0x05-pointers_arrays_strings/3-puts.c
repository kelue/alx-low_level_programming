#include "main.h"
#include <stdio.h>
/**
* _puts - function that prints the string
* @str: string to be printed
*
* Return: always 0
*/

void _puts(char *str)
{
	if (*str == 0)
	{
		printf("\n");
		return;
	}

	do {
		printf("%c", *str);
		str = str + 1;
	} while (*str != '\0');

	printf("\n");
}
