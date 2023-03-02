#include "main.h"
#include <stdio.h>

/**
* _strcmp - function that compares two strings
* @s1: string one
* @s2: second string to compare
*
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int n1 = 0;
	int n2 = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		n1 += (int) s1[i];
		i++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		n2 += (int) s2[i];
		i++;
	}

	return (n1 - n2);	
}