#include "main.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_binary - prints an unsigned number
 * @args: binary argument
 * Return: Number printed
 */
int print_binary(va_list args)
{
	unsigned int c;
	int i, j, count;
	int *array;

	c = va_arg(args, int)
	i = 0;
	if (c == 0)
	{
		putchar ('0');
		return (1);
	}
	int c_bits = log2(c) + 1;

	array = (int *)malloc(c_bits * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	while (c > 0)
	{
		arr[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}
	free(array);
	return (1);
}
