#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a character
 * @args: A va_list pointing to the character to be printed
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer
 * @args: A va_list pointing to the integer to be printed
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: A va_list pointing to the float to be printed
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: A va_list pointing to the string to be printed
*/
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: the variadic arguments to be passed
*/

void print_all(const char * const format, ...)
{
	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].format)
		{
			if (formats[j].format == format[i])
			{
				printf("%s", separator);
				formats[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
