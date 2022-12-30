#include "main.h"
/**
 * puts_half - function that prints half of string,followed by  new line.
 * if odd len, n = (length of the string -1) / 2
 * @str: This is the input string
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;
	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar('\n');
	_putchar('\n');
}
