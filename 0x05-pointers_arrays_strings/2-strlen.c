#include "main.h"

/**
 * _stren - returns the lengthof the string
 * @s:describes string
 * Return: returns length as integer;
 */
int _strlen(char *s);
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
