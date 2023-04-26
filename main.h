#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 *struct specifier
 *@valid: valid character
 *@v: associated function
 */
typedef struct spec
{
	char *valid;
	int (*v)(va_list);
}spec;
int (*get_spec(char p))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_per(va_list args);
int print_string(va_list args);
int print_c(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);
#endif
