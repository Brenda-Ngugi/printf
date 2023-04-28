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
	return (_putchar(c));
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

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 *print_decimal - checks and prints a decimal
 *@args: decimal specifier
 *@abs: gets the absolute value of  anumber
 *@count: keeps track of printed characters
 *@n: holds the current specifier value
 *Return: count
 */
int print_decimal(va_list args)
{
	unsigned int np, holdn, count, abs;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		abs = (n * -1);
		count += _putchar('-');
	}
	else
		abs = n;

	holdn = 1;
	np = abs;
	while (np > 9)
	{
		np /= 10;
		holdn *= 10;
	}
	while (holdn >= 1)
	{
		count += _putchar(((abs / holdn) % 10) + '0');
		holdn /= 10;
	}
	return (count);
}
/**
 *print_int - checks and prints integer
 *@args: int argument
 *Return: returns print_decimal
 */
int print_int(va_list args)
{
	return (print_decimal(args));
}
