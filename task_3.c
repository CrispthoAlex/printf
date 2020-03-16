#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_b - prints an unsigned integer in binary (base 2)
 * @b: unsigned integer to print
 * Description: print in binary number up to the value of 2,147,483,647
 * Return: number of digits printed
 */
int print_b(va_list b)
{
	/* n = input number, m = max number,
	 * i = iterator, j = print counter,
	 * k = end position of n value when formated into binary
	 */
	unsigned int n, m, i, k;
	unsigned int a[32];/*strlen+2 (base 10*3 for each digit conversion)*/
	int j;

	n = va_arg(b, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, k = 0, j = 0; i < 32; i++)
	{
		k += a[i];
		if (k || i == 31)
		{
			_putchar('0' + a[i]);
			j++;
		}
	}
	return (j);
}
