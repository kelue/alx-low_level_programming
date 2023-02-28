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
	int i = 1;

	do {
		i++;
		s = s + 1;
	} while (*s != 33);

	return (i);
}
