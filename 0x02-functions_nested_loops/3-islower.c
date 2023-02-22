#include "main.h"

/**
* _islower - check if alphabet is lower case
* @c: params to be printed
* Return: 1 if char is loweercase else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
