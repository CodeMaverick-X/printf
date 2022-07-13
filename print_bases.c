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

/**
 * print_hex - print a number in hexadecimal base,
 * in lowercase
 * @l: va_list arguments from _printf
 * Description: the function calls convert() which in turn converts the
 * inpute int the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	count += _puts(str);
	return (count);
}
/**
 * print_hex_big - prints the number in the hexadecimal base
 * in uppercase
 * @l: va_list argument from _printf
 * if the flag is passed to _printf
 * Description: the function calls convert() which in turn converts the inpute
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex_big(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf
 * Description: the function calls converts() which in turns converts
 * the input into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}
