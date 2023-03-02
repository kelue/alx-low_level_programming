#include <stdio.h>

/**
* _strcat - function that concatenates two strings
* @dest: destination of the new string
* @src: source of the string to be concatenated
*
* Return: a pointer to the resulting destination string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlength = 0;
	int srclength = 0;

	while (dest[i] != '\0')
	{
		destlength++;
		i++;
	}

	i = 0;

	while (src[i] != '\0')
	{
		srclength++;
		i++;
	}

	i = 0;
	while (i < srclength)
	{
		dest[destlength + i] = src[i];
		i++;
	}

	dest[destlength + srclength] = '\0';

	printf("new dest: %s", dest);
	return (dest);
}
