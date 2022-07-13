#include "main.h"
/**
 * get_print - selects the right printing function
 * depending on the conversion specifeir passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a matchbetween the specifier passed to _printf
 * and the first element of the struct, and return the appropriate
 * function
 * Return: a pointer to the matching function
 */
int (*get_print(char s))(va_list)
{
	ph func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_bigS_format},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'x', print_hex},
		{'X', print_hex_big},
		{'o', print_octal},
		{'u', print_unsigned}
	};

	int flags = 10;

	int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);

}
