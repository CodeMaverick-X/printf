#include "main.h"
#include <unistd.h>
// to be honest with you, i nor understand this _putchar, i dont know why we cannot just use the one from stdio
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
