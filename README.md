<h1>Creating our own printf function in C</h1>

<h2>Requirments</h2>

<ul>
<li> Allowed editors: vi, vim, emacs</li>
<li> Our code shoud use the Betty style.</li>
<li> We are not allowed to use global variables</li>
<li> We cant use more than 5 functions per file</li>
<li> We have to use a header file called main.h were all the prototypes of our functions should be included</li>
<li> The header fil should be guarded and must be pushed</li>
<li> Code should be compiled using this flags gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c</li>
</ul>
<h2>File Descriptions</h2>

<ul>
<li> _printf.c: Main printf function where we used the cap of functions(5)</li>
<li>. main.h: The header file wich contains all the functions that are not in _printf.c</li>
<li> _putchar.c: Our own putchar function</li>
<li> _putprc: One function that will be called when handling % cases</li>
<li> man_3_printf: Manpage of our project</li>
</ul>
<h2>Description:</h2>

_printf function: A function that produces output according to a format
int _printf(const char *format, ...)
The format string is string of characters, its composed by zero or more arguments
this arguments could be ordinary characters, wich are copied unchanged, and conversion specifications, wich could have zero or more subsquent arguments

<h2>Conversion specifiers</h2>

<ul>
<li> d, i: Int argument</li>
<li>.c: int argument is converted to char, and the resulting character is written</li>
<li>.s: the constant char* argument is a pointer to a string. We used our own _putchar to print each character of this string. _putchar just prints one character so we used a bucle to print the whole string</li>
<li>.%: When we face two % in a row no argument is converted and just one % is written increasing the count just by 1</li>
</ul>
<h1>All our functions</h1>

<h2>#int _putchar(char c):</h2>

This function gets a char and write this parameter to the stdout

<h2>#int _printc(va_list args):</h2>

This function gets a variadic arguments list,print the char and return 1 that will be the length of the printed character 

<h2>#int _prints(va_list args):</h2>

The function gets a variadic arguments list, iterates through it, prints each character of the string in question, and returns the number of characters printed.

<h2>#int _printint(va_list args):</h2>

This function gets a variadic arguments list, iterates through it, prints each number of int type and returns the length of the integer.

<h2>#int _menu(const char *format, va_list args):</h2>

Here is where all the magic happens, we used a switch to handle every posible scenario.
We had a big challenge avoiding the 40 lines limit of Betty style and for that we had to move the switch to itsown function apart from the main

<h2>#int _printprc(void):</h2>

This function is used to handle with % cases , it prints a % and return 1 that is the lenght of th printed character

<h2>#int _printf(const char *format, ...):</h2>

Our main function
 
<h2>#Return Value of _printf</h2>

With successful return, the function will return the number of characters printed(will not count the null byte used to end strings).
if an output error comes, a negative value is returned

<h2>#Team</h2>

Gisselle Nieves - <a href="https://github.com/Gisezegki">github</a>
Ignacio Martinez - <a href="https://github.com/nachofen">github</a>
