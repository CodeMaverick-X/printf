#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct prtintHandler
{
	char c;
	int (*f)(va_list ap);
} ph;

int _printf(const char *format, ...);

/* print alpha */
int print_char(va_list l);
int print_string(va_list l);

/* get_print */
int (*get_print(char s))(va_list);

/* write funcs */
int _putchar(char c);
int _puts(char *str);

#endif
