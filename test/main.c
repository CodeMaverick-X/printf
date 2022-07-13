#include "main.h"
int main(void)
{
	char f = 'f';
	char str[] = "bot";
	int bin = 10;
	int hex = 12;
	int oct = 9;
	int uns = 20;

	_printf("%c", f);
	_printf("%s", str);
	_printf("%b", bin);
	_printf("%X", hex);
	_printf("%o", oct);
	_printf("%u", uns);

	return (0);
}
