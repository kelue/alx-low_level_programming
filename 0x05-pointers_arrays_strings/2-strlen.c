#include "main.h"
#include <stdio.h>
/**
* _strlen - function that determines the length of a string
* @s: pointer to the first char in the string
*
* Return: length of string i
*/

int _strlen(char *s)
{
	int i = 0;

	if (*s == NULL)
		return (0);

	do {
		i++;
		s = s + 1;
	} while (*s != '\0');

	return (i);
}
