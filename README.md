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

2. print the singular character 'e'	|
+ Use: `_printf("%c", e);`
+ Output: `e`
3. Print the decimal number 5	|
+ Use: `_printf("%d", 5);`
+ Output: `5`

4. Print the int number -98	|
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

### Return values

On success returns an integer number of symbols printed not counting \\0 for the string.

On failure returns error number (255)

------------
## Team Project

It's a collaboration between Crispthofer Rincon & Santiago Martinez, students (from cohort 11 - january 2020) of Software Engineering at [Holberton School](https://www.holbertonschool.com/)

### Waiting for you in Holberton School Campus Cali, Colombia
![](https://assets.holbertonschool.com/media_images/files/000/000/822/original/hero-2165.jpg)