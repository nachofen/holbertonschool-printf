#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printc - this function prints a char
 * @args: the list
 * Return: updated counter
 */

int _printc(va_list args)
{
	char auxc;
	int contador = 0;

	auxc = va_arg(args, int);
	_putchar(auxc);
	contador++;
	return (contador);
}
/**
 * _prints - this function uses a char pointer to the va_arg string
 * if the pointer is null prints (null) if not uses _putchar to print
 * each character and increase the counter each time
 * @args: the list
 * Return: updated counter
 */
int _prints(va_list args)
{
	int x = 0, contador = 0;
	char *auxs, *nul;

	nul = ("(null)");
	auxs = va_arg(args, char*);
	if (auxs == NULL)
	{
		while (nul[x])
		{
			_putchar(nul[x]);
			contador++;
			x++;
		}
	}
	else
	{
		x = 0;
		while (auxs[x] != '\0')
		{
			_putchar(auxs[x]);
			contador++;
			x++;
		}
	}
	return (contador);
}
/**
 * _printint - this function is used for %i and %d
 * first check if its positive or not and then uses
 * a bucle to know the digits of the number.
 * it saves in an array the reversed numbers and using putchar
 * with module it prints each number in reverse again obtaining the right order
 * @args: the list
 * Return: updated counter
 */
int _printint(va_list args)
{
	int numgrandeaux;
	int i = 0, j = 0, menos = 0;
	unsigned int num = 0, num2 = 0;
	int array[10];

	numgrandeaux = va_arg(args, int);
	num = numgrandeaux;
	if (numgrandeaux < 0)
	{
		_putchar('-');
		menos = 1;
		num = -numgrandeaux;
	}
	num2 = num;
	while (num2 / 10 >= 1)
	{
		j++;
		num2 = num2 / 10;
	}
	while (num > 0 && i <= j)
	{
		array[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(array[i]);
	}
	return (j + 1 + menos);
}
/**
 * _menu - this function handle all the posible cases
 * @format: the format of the following paramter of variadic
 * @args: the list of arguments
 * Return: updated counter
 */
int _menu(const char *format, va_list args)
{
	int contador = 0, i = 0;

	for (; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			contador++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case '\0':
					return (-1);
				case '%':
					contador += _printprc();
					break;
				case 'c':
					contador += _printc(args);
					break;
				case 's':
					contador += _prints(args);
					break;
				case 'i':
					contador += _printint(args);
					break;
				case 'd':
					contador += _printint(args);
					break;
				default:
					i--;
					contador += _printprc();
					break;
			}
		}
	}
	return (contador);
}

/**
 * _printf - this function prints strings, chars , integers
 * and can handle to print variables
 * @format: the format of the following paramter of variadic
 * Return: the number of characters that the function printed
*/

int _printf(const char *format, ...)
{

	int contador = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	contador += _menu(format, args);
	va_end(args);
	return (contador);
}
