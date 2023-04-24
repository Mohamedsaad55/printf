#include "main.h"
/**
 *printf_char - prints a char.
 *@val: arguments.
 *Return: 1.
 */
int _print_char(va_list rgs)
{
	int c= va_args(args, int);
	putchar(c);
	return 1;
}
