#include "main.h"


/**
 * _printf - produces output according to a format.
 * @format: 
 * @...: 
 * unknown number of arguments
 * Return: (number of characters included excluding null charaters to end strings)
 */



int _printf(const char *format, ...)
{
	va_list ptr;
	int return_value;


	va_start(ptr,format);
	return_value = 0;
	while(*format != '\0')
	{
		if(format == '%')
		{
			return_value += output_frmt(*(++format),ptr);
		}
		else
		{
			return_value += write(1,format, 1);
		}
		++format;
	}
	va_end(ptr);
	return return_value;
}
