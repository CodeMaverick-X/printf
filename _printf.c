#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get print function that
 * will determine which function to call depending on the conversion
 * specifiers contained in the format
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list); //this is a pointer to the function that will be returned by get_print
	const char *p; //this is a pointer to the address that format is pointing to, so that it can be increased to get the rest values in the string
	va_list arguments; //our normal va_list pointr to the arguments

	int count = 0;// notice that in the repo i sent you there was a register keyword here do research on it, its not actually needed

	va_start(arguments, format);
	//these are error checkers,c chat me for more explanation
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	//the loop where p pointer will itirate through the format string
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');//these count are incremented anytime somthing is printed
				continue;//skip the rest part of the loop, increment and run the loop again
			}
			else
			{
				pfunc = get_print(*p);//the function returned by get_print is returned to the function pointer pfunc
				count += pfunc(arguments);//run pfunc
			}
		}
		else
			count += _putchar(*p);//if not a specifier
	}
	_putchar(-1);//this guy is a bit confusing, check the write file for the _putchar func
	va_end(arguments);
	return (count);//printf returns the number of characters it outputs
	//DELETE ALL THE INLINE COMMENTS AFTER REVIEWING ;)

}
