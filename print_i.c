#include "main.h"

/**
 *  prints an unsigned integer
 *  @num is the unsigned integer 
 *
 *  Return : number of Chars
 */

int _print_i(unsigned int num)
{
	unsigned int div =1;
	int length =0;

	while (num / div > 9 )
		div *= 10;
	while (div != 0)
	{
		_putchar('0' + num/div);
		num %=div;
		div /= 10;
		length++;
	
	}

	return length;
}
