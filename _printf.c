#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * verify_type - search list of types for a matching format
 * @format: string of formats from input
 * Description: refers to struct for valist database of formats.
 * Return: on success ptr to right function or NULL if failure
 */
static int (*verify_type(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints a variety of outputs in specific formats
 * @format: input argument types for output format
 * Description:  produces output according to a format using _putchar.
 * Return: number of characters printed or error number -1
 */
int _printf(const char *format, ...)
{
	/* i = iterator of format string */
	/* j = counter of chars printed */
	unsigned int i = 0, j = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		f = verify_type(&format[i + 1]);
		if (f != NULL)
		{
			j += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		j++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (j);
}
