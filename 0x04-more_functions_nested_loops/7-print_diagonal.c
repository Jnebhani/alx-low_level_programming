#include"main.h"

/**
 * print_diagonal draws a diagonal line onthe terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n);
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)	
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i);
				{
					_putchar(' ');
				}
				_purchar('\n');
			}
		}
	}
}
