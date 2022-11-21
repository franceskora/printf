#include "main.h"

/**
 * parse_perc - return the character
 * @buff_dest: character
 * @arg: list of arguments
 * @buff_count: index of buffer pointet
 * Return: the buffer index
 */
int parse_perc(char *buff_dest, va_list arg, int buff_count)
{
	char c = va_arg(arg, int);

	/* reassigned due to unexpected behavious */
	c = '%';

	buff_dest[buff_count] = c;

	return (++buff_count);
}
