#include "main.h"

/**
 * print_str function 
 * Returns the number of characters printed
 */


int _print_str(va_list args)
{
	char*str = va_arg(args,char*);
	int length = 0;
	int i=0;

	for(i = 0 ; str[i] != '\0' ;i++)
	{
		_putchar(str[i]);
		length++;
	}

	return length;

}
