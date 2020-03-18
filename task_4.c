#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_u - prints an unsigned integer
 * @u: unsigned int to print
 * Description: print in decimal number up to the value of 1,000,000,000
 * Return: number of digits printed
 */
int print_u(va_list u)
{
	unsigned int a[10]; /* n = input number, m = max number,*/
	unsigned int i, m, n, k; /* k = end position of n value in decimal*/
	int j; /* i = iterator, j = print counter,*/

	n = va_arg(u, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, k = 0, j = 0; i < 10; i++)
	{
		k += a[i];
		if (k || i == 9)
		{
			_putchar('0' + a[i]);
			j++;
		}
	}
	return (j);
}

/**
 * print_o - prints an unsigned integer in octal (base 8)
 * @o: unsigned int to print
 * Description: print in octal number up to the value of 1,073,741,824
 * Return: number of digits printed
 */
int print_o(va_list o)
{
	unsigned int a[11]; /* n = input number, m = max number,*/
	unsigned int i, m, n, k; /* k = end position of n value into octal*/
	int j; /* i = iterator, j = print counter,*/

	n = va_arg(o, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, k = 0, j = 0; i < 11; i++)
	{
		k += a[i];
		if (k || i == 10)
		{
			_putchar('0' + a[i]);
			j++;
		}
	}
	return (j);
}

/**
 * print_x - prints an unsigned integer in hexadecimal (base 16)
 * @x: unsigned int to print
 * Description: print in hexadecimal number up to the value of 268,435,456
 * Return: number of digits printed (lower case)
 */
int print_x(va_list x)
{
	unsigned int a[8]; /* n = input number, m = max number,*/
	unsigned int i, m, n, k; /* c = ascii character fix */
	int j; /* i = iterator, j = print counter,*/
	char c; /* k = end position of n value when formated into hexadecimal*/

	c = 'a' - ':';
	n = va_arg(x, unsigned int);
	m = 268435456;
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, k = 0, j = 0; i < 8; i++)
	{
		k += a[i];
		if (k || i == 7)
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


/**
 * print_X - prints an unsigned integer in hexadecimal (base 16)
 * @X: unsigned int to print
 * Description: print in hexadecimal number up to the value of 268,435,456
 * Return: number of digits printed (uppercase)
 */
int print_X(va_list X)
{
	unsigned int a[8]; /* n = input number, m = max number,*/
	unsigned int i, m, n, k; /* i = iterator, j = print counter,*/
	int j; /* c = ascii character fix */
	char c; /* k = end position of n value when formated into hexadecimal*/

	c = 'A' - ':';
	n = va_arg(X, unsigned int);
	m = 268435456;
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, k = 0, j = 0; i < 8; i++)
	{
		k += a[i];
		if (k || i == 7)
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
