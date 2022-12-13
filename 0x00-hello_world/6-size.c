#include <stdio.h>

/*
 * main - is the entry point of the program.
 *Return:zero if no error, Non-zero value  if errors. 
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int)); 
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}       	       
