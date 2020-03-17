#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_r - prints a reverse string
 * @r: reverse string to print
 * Description: prints ptr of chars one by one & counts how many prints
 * Return: number of chars printed
 */
int print_r(va_list r)
{
	int j = 0, i = 0;/*i - count printed, k - length string*/
	char *str = va_arg(r, char *);

	if (str == NULL)
		str = ")llun(";
	while (str[i])
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);/* printed */
}
