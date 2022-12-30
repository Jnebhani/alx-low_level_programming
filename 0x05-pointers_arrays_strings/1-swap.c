#include "main.h"

/**
 * swap_int - function that swap the values of two integers
 * @a: is the first integer
 * @b: is the second integer
 * Return:always 0.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
