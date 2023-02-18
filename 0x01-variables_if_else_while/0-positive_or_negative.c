#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - main function here
 *
 * Return: always 0 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
		printf("%i is zero");
	return (0);
}
