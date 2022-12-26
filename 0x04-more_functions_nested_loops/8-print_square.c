#include"main.h"

/**
 * print _square - the function prints square followed by new line
 * @size: size of square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
