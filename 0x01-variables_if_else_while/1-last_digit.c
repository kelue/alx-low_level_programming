#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - main function here 
 *
 * Return: always 0 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0");
	}
	else
		printf("and is 0");

	return (0);
}
