#include <stdio.h>

/**
* _strncpy - function that copys a string
* @dest: destination to copy the string to
* @src: source string to copied
* @n: number of bytes at most to be used
*
* Return: pointer to the dest of the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (src[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;

	while (i <= length)
	{
		if (i == n)
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
