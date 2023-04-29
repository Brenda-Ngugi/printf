#include "main.h"
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/**
 * print_binary - prints an unsigned number
 * @args: binary argument
 * Return: Count
 */
int print_binary(va_list args)
{
	unsigned int p;
	int count, i;
	int array[100];

	p = va_arg(args, int);
	count = 0;

	if (p == 0)
	{
		_putchar('0');
		return (1);
	}
	while (p > 0)
	{
		array[count] = p % 2;
		p = p / 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	return (count);
}
