#include <main.h>

/**
 * output_frmt - produces output according to a format
 * @frt_specifier: The format specifier
 * @ptr:
 * Return: Number of characters outputed.
 */


int output_frmt(char frt_specifier, va_list ptr)
{
	int count = 0;

	if(frt_specifier == 'c')
	{
		count += print_char(va_arg(ptr, int));
	}
	else if(frt_specifier == 's')
	{
		count += print_str(va_ard(ptr, char *));
	}
	else
	{
		count += write(1, format, 1);
	}
	return count;
}
