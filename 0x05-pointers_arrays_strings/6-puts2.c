#include "main.h"

/**
* puts2 - function prints every other character
* @str: string to use
*
* Return: 1
*/

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
}
