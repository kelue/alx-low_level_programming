#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
