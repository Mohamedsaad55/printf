#include "main.h"

/**
* _printf - produces output according to a format
* @format: format string containing the characters and the specifiers
*
* Description: This function will call function that will determine which
* printing function to call depending on the conversion specifiers contained
* into fmt.
*
* Return: length of the formatted output string
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
			case 'c':
				len += _print_c(args);
				break;
			case 's':
				len += _print_str(args);
				break;
			case '%':
				len += _print_p(args);
				break;
			case 'd' :
				len += _print_d(args)
			case 'i' :
				len += _print_i(args):
				break;	
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	va_end(args);
	return len;
}
