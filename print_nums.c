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
	int i = count_digits(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		i += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		i += _putchar('+');
	if(n <= 0 )
		i++;
	print_num(n);
	return (i);
}

/**
 * print_num - functions helps to loop through
 * an integer and print all its digit
 * @n: integer argument passed in 'print_int' function
 */
void print_num(int n)
{
	unsigned int u;

	if (n < 0)
	{
		_putchar('-');
		u = -n;
	}
	else
		u = n;
	if(u / 10)
		print_num(u / 10);
	_putchar((u % 10) + '0');
}


/**
 * count_digit - returns the number of digit in an integer
 * @i; parameter for integers
 *
 * Return: on success, total count of intergers
 */
int count_digits(int i)
{
	unsigned int n = 0;
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
