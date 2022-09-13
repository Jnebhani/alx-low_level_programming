#include <stdio.h>

/**
*main - Prints the alphabet at reverse
*
*Return: Always (Success)
*/
{
       char c;
   for (c = 'z'; c >= 'a'; c--)
{
       putchar(c);
}
     putchar('\n');
 
   return (0);
}
