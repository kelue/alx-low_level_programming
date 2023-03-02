#include "main.h"
#include <stdio.h>

/**
* string_toupper - function that capitalizes all alphas in string
* @str: string to be capitalized
*
* Return: 1
*/

char *string_toupper(char *str)
{
	int i = 0;
	char temp;

	while (str[i] != '\0')
	{
		if (((int) str[i] > 96) && ((int) str[i] < 122))
		{
			temp = (int) str[i] - 32;
			str[i] = temp;
		}
		i++;
	}

	return (str);
}
