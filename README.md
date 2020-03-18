![](https://assets.holbertonschool.com/school_event_types/photos/000/000/011/regular/IMG_3198.jpg?1574094855)

![](https://rails-assets.holbertonschool.com/assets/logos/holberton-school-logo_tablet-1-04810483bf8b1cf6eb253405d5b35dbed5fd303a896eba7f9b2d53c7d4690fe5.png)
________________________________________________________________________________
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

| Specifier | Output |
| ------------- | ------------- |
| c | Character  |
| d or i | Signed decimal integer |
| s | String of characters |
| b | unsigned decimal integer in binary |
| u | unsigned decimal integer |
| o | unsigned decimal integer in octal |
| x | unsigned decimal integer in hexadecimal lower case |
| X | unsigned decimal integer in hexadecimal upper case |
| p | address as hexadecimal (base 16) lower case |
| S | String including Non printable characters |
| r | reversed string |
| R | string in rot13 |
| %  | Character |

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

* task_6.c

`static unsigned long power(unsigned int x, unsigned int y)` /* calculates an exponent */

`int print_p(va_list p);` /* prints a hexadecimal address (0x base 16) */

* task_7.c

`int print_S(va_list S);` /* prints a string with Non printable characters (ASCII code value hexadecimal) */

* task_14.c

`print_r(va_list r);` /* prints a reverse string */

* task_15.c

`int print_R(va_list R);` /* prints a string in rot13 */

### Return values

On success returns an integer number of symbols printed not counting \\0 for the string.

On failure returns error number (-1)

------------
## Flowchart

* [_printf](https://drive.google.com/file/d/18urUCRs0wF_hn4KMm4oob39qXFOyzZQd/view?usp=sharing)

* [verify_type](https://drive.google.com/file/d/1UkRRm2s3xmWcHA2c_0XRnQyJkw51hVUD/view?usp=sharing)

## Team Project

It's a collaboration between Crispthofer Rincon & Santiago Martinez, students (from cohort 11 - january 2020) of Software Engineering at [Holberton School](https://www.holbertonschool.com/)

### Waiting for you in Holberton School Campus Cali, Colombia
![](https://assets.holbertonschool.com/media_images/files/000/000/822/original/hero-2165.jpg)