#include "main.h"

/**
 * print_flags - Calculates active flags
 * @format: formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: flags.
 */
int print_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char flags_ch[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flags_arr[] = {f_minus, f_plus, f_zero, f_hash, f_space, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; flags_ch[j] != '\0'; j++)
			if (format[curr_i] == flags_ch[j])
			{
				flags |= flag_arr[j];
				break;
			}

		if (flags_ch[j] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flags);
}
