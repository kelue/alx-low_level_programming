#include "main.h"

/**
* puts2 - function prints every other character
* @str: string to use
*
* Return: 1
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
