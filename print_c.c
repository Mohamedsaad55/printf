#include "main.h"
/**
 *printf_char - prints a char.
 *@val: arguments.
 *Return: 1.
 */
int _print_c (va_list rgs)
{
	int c=va_arg(args, int);
	putchar(c);
	return 1;
}
