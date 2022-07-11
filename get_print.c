#include "main.h"
int (*get_print(char s))(va_list)
{
	ph func_arr[] = {
		{'c', print_char}
	};

	int flags = 1;// this is just a number of elements in the func_arr, dis is needed for the loop condition
	int i;//unlike that repo, i removed the register keyword
	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)//comparison with the func_arr character and returns corresponding function
			return (func_arr[i].f);
	return (NULL);
	//DELETE COMMENTS WHEN DONE REVIEWING ;)
}
