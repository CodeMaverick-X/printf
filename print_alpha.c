#include "main.h"
int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
