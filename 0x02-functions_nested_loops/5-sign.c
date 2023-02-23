#include "main.h"

/**
* print_sign - function prints signs
* @n: function parameter
*
* Return: 1 if n is positive, 0 if n == 0 or -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
