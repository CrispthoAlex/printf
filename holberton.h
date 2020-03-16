#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type of format to print
 * @f: function for printing
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);

#endif  /* _HOLBERTON_H */
