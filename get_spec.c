#include "main.h"
/**
 *get_spec - looks for a given specifier
 *@p: argument by get_spec
 *Return: Null
 */
int (*get_spec(char p))(va_list)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_string},
		{" % ", print_per},
		{"d", print_decimal},
		{"i", print_int},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (p == arr[i].valid[0])
			return (arr[i].v);
		i++;
	}
		return (0);
}
