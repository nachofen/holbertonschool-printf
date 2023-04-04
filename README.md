<h1>Creating our own printf function in C</h1>

<h2>Requirments</h2>

. Allowed editors: vi, vim, emacs
. Our code shoud use the Betty style.
. We are not allowed to use global variables
. We cant use more than 5 functions per file
. We have to use a header file called main.h were all the prototypes of our functions should be included
. The header fil should be guarded and must be pushed
. Code should be compiled using this flags gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

<h2>File Descriptions</h2>

. _printf.c: Main printf function where we used the cap of functions(5)
. main.h: The header file wich contains all the functions that are not in _printf.c
. _putchar.c: Our own putchar function
. _putprc: One function that will be called when handling % cases
. man_3_printf: Manpage of our project

<h2>Description:</h2>

_printf function: A function that produces output according to a format
int _printf(const char *format, ...)
The format string is string of characters, its composed by zero or more arguments
this arguments could be ordinary characters, wich are copied unchanged, and conversion specifications, wich could have zero or more subsquent arguments

<h2>Conversion specifiers</h2>

. d, i: Int argument
.c: int argument is converted to char, and the resulting character is written
.s: the constant char* argument is a pointer to a string. We used our own _putchar to print each character of this string. _putchar just prints one character so we used a bucle to print the whole string
.%: When we face two % in a row no argument is converted and just one % is written increasing the count just by 1

<h2>All our functions</h2>

#int _putchar(char c):

This function gets a char and write this parameter to the stdout

#int _printc(va_list args):

This function gets a variadic arguments list,print the char and return 1 that will be the length of the printed character 

#int _prints(va_list args):

The function gets a variadic arguments list, iterates through it, prints each character of the string in question, and returns the number of characters printed.

#int _printint(va_list args):

This function gets a variadic arguments list, iterates through it, prints each number of int type and returns the length of the integer.

#int _menu(const char *format, va_list args): Here is where all the magic happens, we used a switch to handle every posible scenario.
We had a big challenge avoiding the 40 lines limit of Betty style and for that we had to move the switch to itsown function apart from the main

#int _printprc(void):

This function is used to handle with % cases , it prints a % and return 1 that is the lenght of th printed character

#int _printf(const char *format, ...):

Our main function
 
#Return Value of _printf

With successful return, the function will return the number of characters printed(will not count the null byte used to end strings).
if an output error comes, a negative value is returned

#Team

Gisselle Nieves - (github)[https://github.com/Gisezegki]
Ignacio Martinez - (github)[https://github.com/nachofen]
