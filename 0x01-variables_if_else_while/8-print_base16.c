#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
	int n = '0';
	int c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
