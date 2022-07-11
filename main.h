#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to the _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct prtintHandler
{
	char c;
	int (*f)(va_list ap);
} ph;

/**
 * struct flags - containing flags to display
 * when the flag specifier is passed to _printf func
 * @plus: flag for the '+' character
 * @space: flag for the ' ' charater
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/* print_nums */
int print_num(va_list l, flags_t *f);
int count_digit(int i);
void print_number(int n);

/* _printf */
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
