#include"main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
