#include"main.h"

/**
 * write - funchion that prints the numbers from 0 to 9
 * Return: always 0
 */

void print_most_numbers(void)
{
	int c;

	for (c <= 0; c >= 9; c++)
	{
	if (c != 2)
	{
	if (c != 4)
	{
	_putchar(c);
	}
	}
	}
	_putchar('\n');
}
