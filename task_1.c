#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_i - prints an integer
 * @i: integer to print
 * Description: print number between -2,147,483,648 and 2,147,483,647
 * Return: number of digits printed and if negative adds the sign printed
 */
int print_i(va_list i)
{
	int a[10];
	int it, m, n, sum, j;

	n = va_arg(i, int);
	j = 0;
	m = 1000000000;
	a[0] = n / m;
	for (it = 1; it < 10; it++)
	{
		m /= 10;
		a[it] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		j++;
		for (it = 0; it < 10; it++)
			a[it] *= -1;
	}
	for (it = 0, sum = 0; it < 10; it++)
	{
		sum += a[it];
		if (sum != 0 || it == 9)
		{
			_putchar('0' + a[it]);
			j++;
		}
	}
	return (j);
}

/**
 * print_d - prints a decimal
 * @d: decimal to print
 * Description: print a base 10 number
 * Return: number of digits printed and if negative adds the sign printed
 */
int print_d(va_list d)
{
	int a[10];
	int it, m, n, sum, j;

	n = va_arg(d, int);
	j = 0;
	m = 1000000000;
	a[0] = n / m;
	for (it = 1; it < 10; it++)
	{
		m /= 10;
		a[it] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		j++;
		for (it = 0; it < 10; it++)
			a[it] *= -1;
	}
	for (it = 0, sum = 0; it < 10; it++)
	{
		sum += a[it];
		if (sum != 0 || it == 9)
		{
			_putchar('0' + a[it]);
			j++;
		}
	}
	return (j);
}
