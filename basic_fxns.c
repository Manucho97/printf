#include "main.h"

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
		count += print_str(va_arg(ptr, char *));
	}
	else
	{
		count += write(1, &frt_specifier, 1);
	}
	return count;
}


/**
 * print_char - prints a single character
 * @c: character to be printed
 * Return: character.
*/
int print_char(char c)
{
	return write(1, &c, 1);
}


/**
 * print_str - prints a string and returns no. of characters printed.
 * @str: pointer to a string
 * Return: number of charcters printed.
*/

int print_str(char *str)
{
	int count = 0;

	while(*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return count;
}