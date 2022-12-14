#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value of the first input
 * @src: input value of the second input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *dest;
	char *src;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
