#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * power - calculates an exponent
 * @x: base of exponent
 * @y: exponent of number
 * Description: allows to use the math.h func POW
 * Return: base raised to the power exponent
 */
static unsigned long power(unsigned int x, unsigned int y)
{
	unsigned int i;
	unsigned long temp = x;

	for (i = 1; i < y; i++)
	{
		temp *= x;
	}
	return (temp);
}

/**
 * print_p - prints a hexadecimal address (0x base 16)
 * @p: addres to print
 * Description: print in hexadecimal number in address format
 * Return: number of chars printed (lower case)
 */
int print_p(va_list p)
{
	/* n = input number, m = max number, i = iterator, j = print counter */
	unsigned int a[16];
	unsigned int i, k; /* k = end position of n value when hex display*/
	unsigned long m, n = va_arg(p, unsigned long);
	int j = 0; /* print counter */
	char c = 'a' - ':'; /* ascii character fix */
	char *s = "(nil)"; /* adress string */

	if (n == 0)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			j++;
		}
		return (j);
	}
	_putchar('0');
	_putchar('x');
	j = 2;
	m = power(16, 15);
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, k = 0, j = 0; i < 16; i++)
	{
		k += a[i];
		if (k || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + c + a[i]);
			j++;
		}
	}
	return (j);
}
