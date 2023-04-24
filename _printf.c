#include<main.h>
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */

in _printf(const chat *format,...)
{
	va_list args;
	int i =0;
	int len =0;

	va_start(args,format);

	if(format-- NULL ||(format[0] == '%' && format[i] =='\0'))
		return(-1);

	// logic Block
	
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++
	
	}
}
