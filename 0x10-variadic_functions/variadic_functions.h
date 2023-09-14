#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int _putchar(char ch);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct format - Structure to hold different data types
 * @c: Character type
 * @i: Integer type
 * @f: Float type
 * @s: String type (char pointer)
 * Description: This structure holds variables of different data types
 *		It can be used to pass around these variables as a single entity
 *		or to apply similar operations to different data types
*/

typedef struct format_t
{
	char format;
	void (*f)(va_list);

} format_t;

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

#endif
