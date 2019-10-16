#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - this function allocates a grid.
 *
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: this return a int pointer to a two dimesional array.
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int a, b;

	a = 0;
	if (width <= 0 || height <= 0 || (width == 1 && height == 1))
		return (NULL);
	c = malloc(height * sizeof(*c));
	if (c == NULL)
		return (NULL);
	while (a < height)
	{
		c[a] = malloc(width * sizeof(int));
		if (c[a] == NULL)
		{
			for (a-- ; a >= 0 ; a--)
				free(c[a]);
			free(c);
			return (NULL);
		}
		for (b = 0 ; b < width ; b++)
			c[a][b] = 0;
		a++;
	}

	return (c);
}
