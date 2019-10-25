#include "variadic_functions.h"
/**
 * print_strings - check the code for Holberton School students.
 *
 * @separator: const char type pointer to strings
 * @n: const unsigned int type
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int a;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";
	for (a = 0 ; a < n ; a++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
