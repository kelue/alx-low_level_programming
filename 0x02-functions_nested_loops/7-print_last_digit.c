#include "main.h"

/**
* print_last_digit - function prints last gigit of number
* @n: integer parameter
*
* Return: last digit of the integer
*/

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
