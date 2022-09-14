nclude "main.h"

#ifndef HOLBERTON_H_INCLUDED

#define HOLBERTON_H_INCLUDED

int _purchar(char);

void print_alphabet(void);

void print_alphabet_x10(void);

int_islower(int c);

int_isalpha(int c);

int print_sign(int n);

int_abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int a, int b);

void print_to_98(int n);

void print_times_table(int n);

void num(int r, int n);

		       
       #endif

#include <main.h>
/**
 *
 * _putchar - writes the character c to stduot
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
 return(write(1, &c, 1));
}

