#include "main.h"
/**
 * print_binary - prints a number in base 2
 * @l: va_list arguments from _printf
 * Description: the function calls convert which in turns converst the
 * inpute number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}
