#include "main.h"

/**
 * parse_oct - substitute %0 by unsigned int argument number
 * @buff_dest: tring to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the 0 of %0 is
 * Return: New index
 */
int parse_oct(char *buff_dest, va_list arg, int buff_count)
{
	unsigned int number = va_arg(arg, unsigned int);
	unsigned int tmp = number;
	int octs = 1;

	while (tmp > 7)
	{
		octs *= 8;
		tmp /= 8;
	}

	tmp = number;
	while (octs > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / octs);
		tmp %= octs;
		octs /= 8;
		buff_count++;
	}

	return (buff_count);
}
