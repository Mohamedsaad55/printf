#include "main.h"

/**
* printf_char - prints a char
* @val: arguments
* Returns the number of Characters 
*/

int _print_c (va_list args)
{
	int c = va_arg(args, int);
	_putchar(c);
	return 1;
}
