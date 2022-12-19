#include "main.h"

/**
 * puts_half - function that prints half of string,followed by  new line.
 * @str: This is the input string
 */
void puts_half(char *str)
{
	int n, half;

	odd = n + 1;
	while (str[odd] != '\0')
		odd++;
	half = odd / 2;
	if (odd % 2 == 1)
		half++;
	while (half < odd)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
