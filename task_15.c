#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_R - prints a string in rot13
 * @R: string to print
 * Description: replaces a letter with the 13th letter after it
 * Return: number of chars printed
 */
int print_R(va_list R)
{
	char *s;
	unsigned int i, k;
	int j = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(R, char *);
	if (s == NULL)
		s = "(ahyy)";
	for (i = 0; s[i]; i++)
	{
		for (k = 0; a[k]; k++)
		{
			if (a[k] == s[i])
			{
				_putchar(b[k]);
				j++;
				break;
			}
		}
		if (!a[k])
		{
			_putchar(s[i]);
			j++;
		}
	}
	return (j);
}
