#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *ptr = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c';
				printf("%s%c", ptr, va_arg(args, int));
				case 'i';
				printf("%s%d", ptr, va_arg(args, int));
				case 'f';
				printf("%s%f", ptr, va_arg(args, double));
				case 's';
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", ptr, str);
				break;
				i++;
				continue;
			}
			ptr =  ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
