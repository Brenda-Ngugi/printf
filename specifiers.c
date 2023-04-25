#include "main.h"
#include<stdio.h>
#include<stdarg.h>
/**
 *print_c - prints character
 *@args: character specifier
 *Return: characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_purchar(c));
}

/**
 *print_string - prints a string
 *@args: string specifier
 *Return: characters
 */
int print_string(va_list args)
{
	int i, count;
	char *str;

	i = 0;
	count = 0;

	str = va_arg(args, char*);
		if (str == NULL)
			str = "(NULL)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			count++;
		}
		return (count);
}
/**
 *print_per - checks for percent sign
 *@args: percent string specifier
 *Return: str
 */
int print_per(va_list args)
{
	char *str;

	str = '%';
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
