#include"main.h"

/**
 * print_alphabet -function to print abc
 *
 * Return: 0 is success.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

