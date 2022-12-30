#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s:describes string
 * Return: returns length as integer
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
	s++;
	}
	return (longi);
}
