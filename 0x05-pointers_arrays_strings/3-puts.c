#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: pointer to string to print
 *
 * Description: prints a string
 * on success: returns no erro
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i]);
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar ('\n');
}
