#include "main.h"
/**
 * print_bigS_format - Non printable characters of Ascii values
 * (0 < ASCII value < 32 or >= 127) will
 * be printed this way: \x, followed by ASCII code
 * hexadeximal(base 16) value (uppercase - always 2 characters)
 * @l: string to be printed of type va_list
 * 
 * Return: number of char printed
 */
int print_bigS_format(va_list l)
{
	char *res, *s = va_arg(l, char *);
	int i, count = 0;

	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[1] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}
	return (count);
}
