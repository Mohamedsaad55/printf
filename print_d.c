#include "main.h"

/**
 * _print_d - prints signed integer
 * @args: argument to print
 *
 * Return: number of characters printed
*/

int _print_d(va_list args)
{
	int x = va_arg(args, int);
	int l = 0;
	if (x < 0)
        {
		x= -1;
		_putchar('-');
		l++;
        }

        l += _print_i(x);

        return l;
}
