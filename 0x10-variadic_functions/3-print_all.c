#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 *
 * @format: specifies the necessary operations
 */
void print_all(const char * const format, ...)
{
	int a;
	int flag;
	char *str;
	va_list list;

	va_start(list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[a + 1] != '\0' && flag == 0)
			printf(", ");
		a++;
	}
	printf("\n");
}
