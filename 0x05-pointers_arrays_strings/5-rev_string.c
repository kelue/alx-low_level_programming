#include "main.h"
#include <stdio.h>

/**
* function - function description
*
*
* Return: 1
*/

void rev_string(char *s)
{
	int i;
	int y = 1;
	int length = 0;
	

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; x[i] != '\0'; i++)
	{
		s[length - y] = x[i];
		y++;
	}
}
