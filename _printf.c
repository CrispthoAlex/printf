#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
