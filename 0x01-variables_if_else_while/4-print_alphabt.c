#include <stdio.h>

/**
* main - main function for the task
*
* Return: always 0
*/

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}

		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
