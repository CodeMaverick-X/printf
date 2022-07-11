#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct prtintHandler
{
	char c;
	int (*f)(va_list ap);
} ph;

/* print alpha */
int print_char(va_list l);
int (*get_print(char s))(va_list);

#endif
