#include "main.h"

/**
 * _printf - fxn that produces output according to fxn
 * @format: 
 * Return: printed characters.
*/


int _printf(const char *format, ...)
{
    va_list ptr;
    int return_value = 0;

    if( *format == NULL)
    {
        return (-1);
    }

    va_start(ptr, format);

    while(*format != '\0')
    {
        if(*format != '%')
        {
            write(1,format, 1);
            return_value += 1;
        
        }
        else
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(ptr, int);
                write(1, &c, 1);
                return_value += 1;
                }
                else if(*format == 's')
                {
                    char *str = va_arg(ptr, char *);
                    int len1 = 0;
                    
                    while(str[len1]!= '\0')
                    {
                        len1 += 1;
                    }
                    write(1, str, len1);
                    return_value = len1;
                }
        }
        format++;

    }
    va_end(ptr);
    return(return_value);

}
