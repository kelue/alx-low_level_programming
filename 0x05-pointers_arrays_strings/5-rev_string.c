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
	/*int length = sizeof(*s) / sizeof(s[0]);*/

	int i = 1;
	char *c = s;

	while (*s != '\0')
	{
		*(c + i) = *s;
		printf("value of c + 1: %c\n", *(c + i));
		i++;
		s = s + 1;
		printf("value of s: %p", s);
	}

	while (i >= 0)
	{
		*s = *(c + i);
		i--;
	}

}
