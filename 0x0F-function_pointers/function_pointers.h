#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

void print_name_as_is(char *name);

void print_name_uppercase(char *name);

void print_name(char *name, void (*f)(char *));

int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

int (*get_op_func(char *s))(int, int);




#endif
