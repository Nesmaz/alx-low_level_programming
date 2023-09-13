#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stdio.h>
#include <stddef.h>

void print_name_as_is(char *name);

void print_name_uppercase(char *name);

void print_name(char *name, void (*f)(char *));

void print_elem(int elem);

void print_elem_hex(int elem);

int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

int (*get_op_func(char *s))(int, int);




#endif
