#include "main.h"

/**
 * _stren - returns the lengthof the string
 * @s:describes string
 * Return: returns length as integer;
 */
int _strlen(char *s);
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
