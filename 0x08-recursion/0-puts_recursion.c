#include "main.h"

/**
* _puts_recursion - function that prints every string with the recursion method
*
* @s: string to be printed
* Return: always 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
