#include "main.h"
#include<stdarg.h>
#include<stddef.h>
/**
 *_printf - our own printf implementation
 *@format: format specifiers
 *Return: Total number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	int (*checker)(va_list);

	va_list args;
	va_start(arge, format);
	count = 0;
	i = 0;

	if (format != NULL)
	{
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i + 1] == '%')
			{
				count += _putchar(format[i + 1]);
				i += 2;
			}
			else
			{
				checker = get_spec(format[i + 1]);
				if (checker)
					count += checker(args);
				else
					count = _putchar(format[i] +
							 _putchar(format[i + 1]);
							 i += 2;
							 }
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
			va_end(args);
			return (count);
	}
		return (-1);
}
