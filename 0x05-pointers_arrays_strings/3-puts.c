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
	while (*str != '\0')
	{
		_putchar(*str != '\0');
	}
	_putchar ('\n');
}
