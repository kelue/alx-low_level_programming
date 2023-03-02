#include <stdio.h>

/**
* _strncat - function that concatenates strings with optional byte count
* @dest: destination of concatenation
* @src: source string for to be concatenated 
* @n: number of bytes
* 
* Return: pointer to concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlength = 0;

	while (dest[i] != '\0')
	{
		destlength++;
		i++;
	}

	i = 0;
	while (i < n)
	{
		if (src[i] == 0)
		{
			break;
		}
		dest[destlength + i] = src[i];
		i++;
	}


	return (dest);
}