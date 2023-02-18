#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
	int char1 = 'a';
	int char2 = 'A';

	while (char1 <= 'z')
	{
		putchar(char1);
		char1++;
	}

	while (char2 <= 'Z')
	{
		putchar(char2);
		char2++;
	}

	putchar('\n');
	return (0);
}
