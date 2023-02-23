#include "main.h"

/**
* _abs - function prints abosulte value of integer
* @n: integer parameter
*
* Return: absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;

	return (n);
}
