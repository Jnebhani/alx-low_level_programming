#include "main.h"

/**
 * rev_string - reverse the string.
 * @s: pointer to string.
 * Return: void.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;
	int j;

	while (s[counter] != '\0')
		counter++;
			for (i = 0; i < counter; i++)
			{
				counter--;
					rev = s[i];
					{
					for (j = 0; j < counter; j++);
					}
					s[j] = s[i];
					s[j] = s[counter];
					s[counter] = rev;
			}
}
