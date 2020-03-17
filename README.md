![](https://web.zonamerica.com/html/img//home/colombia/popup_holberton.jpg)

# printf Project
*March / 2020*
__________________________________________________
The *printf* project is the coding of a function named "*_printf()*" that imitates to "printf()". This C language [function](https://www.cypress.com/file/54761/download) is a powerful device for printing numbers and other things stored in variables.   Located in the [_stdio.h_](https://es.wikipedia.org/wiki/Stdio.h) library. You can find some of the basic features and functions in the [manual 3 of "printf()"](http://man7.org/linux/man-pages/man3/printf.3.html).

__printf()_ is a function that performs formatted output conversion and print data, but what means that. Please, read about the [variadic functions](https://en.cppreference.com/w/c/variadic) and go back later.

Its prototype was defined following:

``
	int _printf(const char *format, ...);
``

Where [**format**](http://www.cplusplus.com/forum/beginner/148436/) contains a string that will be print. This strings is composed by n arguments that will be replace by n tags definied inside the string.

Following, the variadic function format tags prototype is:

	   %[flags][length]specifier

*Return value* is the amount of chars printed (program successfully), see this tables:

Table 1. Specifier
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b | unsigned decimal integer in binary |
| u | unsigned decimal integer |
| o | unsigned decimal integer in octal|
| x | unsigned decimal integer in hexadecimal lower case|
| X | unsigned decimal integer in hexadecimal upper case|
| %  | Character  |

Table 2. Flags
| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- |
| +  | Prints a plus sign (+) when the argument is a positive number. Else, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |

------------

## Examples

1. Printing the string "Example":
+ Use: `_printf("%s", "Example");`
+ Output: `Holberton.`

2. print the singular character 'e':
+ Use: `_printf("%c", e);`
+ Output: `e`
3. Print the decimal number 5:
+ Use: `_printf("%d", 5);`
+ Output: `5`

4. Print the int number -98:
+ Use: `_printf("%i", -98);`
+ Output: `-98`

------------

## File Functions

### _printf.c
Our printf function the Performs formatted Output Conversion And Print Data.

------------

### holberton.h
Header file. Include all prototypes functions used

------------
### Task files
### Task files                                                                                                           

* task_0.c

`int print_c(va_list c)` /* prints a char */

`int print_s(va_list s)` /* prints a string */

* task_1.c

`int print_i(va_list i)` /* prints an integer */

`int print_d(va_list d)` /* prints a decimal */

* task_3.c

`int print_b(va_list b)` /* prints an unsigned integer in binary (base 2) */

* task_4.c

`int print_u(va_list u);` /* prints an unsigned integer */

`int print_o(va_list o);` /* prints an unsigned integer in octal (base 8) */

`int print_x(va_list x);` /* prints an unsigned integer in hexadecimal (base 16) */

`int print_X(va_list X);` /* prints an unsigned integer in hexadecimal (base 16) */

### Return values

On success returns an integer number of symbols printed not counting \\0 for the string.

On failure returns error number (-1)

------------
## Team Project

It's a collaboration between Crispthofer Rincon & Santiago Martinez, students (from cohort 11 - january 2020) of Software Engineering at [Holberton School](https://www.holbertonschool.com/)

### Waiting for you in Holberton School Campus Cali, Colombia
![](https://assets.holbertonschool.com/media_images/files/000/000/822/original/hero-2165.jpg)