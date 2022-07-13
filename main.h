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
typedef struct printHandler
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
int print_int(va_list l);
int count_digits(int i);
void print_num(int n);
int print_unsigned(va_list l);

/* _printf */
int _printf(const char *format, ...);

/* print alpha */
int print_char(va_list l);
int print_string(va_list l);

/* print_base */
int print_binary(va_list l);
int print_hex(va_list l);
int print_hex_big(va_list l);
int print_octal(va_list l);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* get_print */
int (*get_print(char s))(va_list);

/* write funcs */
int _putchar(char c);
int _puts(char *str);

#endif
