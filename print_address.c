#include "main.h"
/* print_address - print address a pointer is pointing to
 * @l: parameter of type va_list
 *
 * Return: count of printed address
 */
int print_address(va_list l)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);
	int count = 0;

	if (!p)
		return (_puts("(null)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
