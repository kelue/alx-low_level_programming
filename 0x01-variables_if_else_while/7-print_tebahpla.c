#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
