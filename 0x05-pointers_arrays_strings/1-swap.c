#include "main.h"

/**
* swap_int - function  that swaps the integers
* @a: pointer to integer a
* @b: pointer to integer b 
*
* Return: always 0
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
