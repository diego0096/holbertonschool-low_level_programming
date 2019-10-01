#include "holberton.h"
/**
 * swap_int - swap de value of two integers..
 *
 * @a: int type
 * @b: int type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
