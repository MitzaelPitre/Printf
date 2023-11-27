#include "main.h"

/**
 * _printf - printf function
 * @format: variable
 * Return: number of bytes
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i = 0, characters_number = 0;

	if (!format)
		return (-1);

	va_start(arg_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				characters_number++;
				i++;
			}
			else if (cmp_func(format[i + 1]) != NULL)
			{
				characters_numbers += cmp_func(format[i + 1])(Mylist);
				i++;
			}
			else
			{
				_putchar(format[i]);
				characters_number++;
			}
		}
		else
		{
			_putchar(format[i]);
			characters_numbers++;
		}
	}
	va_end(Mylist);
	return (chaacters_number);
}
