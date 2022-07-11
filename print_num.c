#include "main.h"
/**
 * print_int - prints an integer
 * @l: arguments of type va_list from _printf function
 * @f: argument of type flags for each format flags
 *
 * Return: integer
 */
int print_int(va_list l, flags_t *f)
{

	int n = va_arg(l, int);
	int i = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		i += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		i += _putchar('+');
	if(n <= 0 )
		i++;
	print_number(n);
	return (i);
}

/**
 * count_digit - returns the number of digit in an integer
 * @i; parameter for integers
 *
 * Return: on success, total count of intergers
 */
int count_digits(int i)
{
	unsigned int n;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		n++;
	}
	return (n);
}
