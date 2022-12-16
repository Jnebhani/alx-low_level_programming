#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if character is uppercase
 *
 * @c: checks input of function
 * Return: returns 1 if 'c' is uppercase otherwise always 0 (success)
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;
for (uppercase <= '2'; uppercase++;)
{
if (c == uppercase)
{
isupper = 1;
}
}
return (isupper);
}
