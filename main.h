#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int output_frmt(char frt_specifier, va_list ptr);
int print_char(char c);
int print_str(char *str);



