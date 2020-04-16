#include "search_algos.h"
/**
 * print_array - Function to print contents
 * @array: Pointer to array to be printed
 * @size: Size of array to be printed
 * Return: Always successful
 *
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0 && i < size)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - Function to perform binary search
 * @array: Pointer to array
 * @size: size of array
 * @value: value to be searched
 * Return: Return index of value if found
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t s;
	size_t m;
	size_t e;

	if (array)
	{
		s = 0;
		e = size - 1;
		while (s <= e)
		{
			print_array(array + s, e + 1 - s);
			m = (s + e) / 2;
			if (array[m] < value)
				s = m + 1;
			else if (array[m] > value)
				e = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
