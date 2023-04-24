#include "main.h"
/**
 * print_str function 
 * Returns the number of characters printed
 */


int _print_str(va_list args)
{
	char*str = va_arg(args,char*);
	int lenght = 0;
	int i=0;
	
	for(i = 0 ; str[i] != '\0' ;i++)
	{
		putchar(s[i]);
		len++;
	}

	return len;

}

