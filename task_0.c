#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_c - prints a char
 * @c: char to print
 * Description: prints a single ascii character
 * Return: 1 (for one char printed)
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 * Description: prints ptr of chars one by one & counts how many prints
 * Return: number of chars printed
 */
int print_s(va_list s)
{
	int j;
	char *str = va_arg(s, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
