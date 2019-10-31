#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * @separator: const char type pointer to string between numbers.
 * @n: cons unsigned char;
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (a = 0 ; a < n ; a++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && (a < (n - 1)))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
