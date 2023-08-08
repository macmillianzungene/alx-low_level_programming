#include "main.h"
#include <stdlib.h>

/**
  * **alloc_grid - pointer to a 2 dimensional array of integers
  *
  * @width: input int
  * @height: input int
  *
  * Return: results
  */
int **alloc_grid(int width, int height)
{
	int **a, b, p;

	a = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			a[b] = malloc(sizeof(**a) * width);
			if (a[b] == 0)
			{
				/*if malloc fails ferr all*/
				while (b--)
					free(a[b]);
				free(a);
				return (NULL);
			}

			for (p = 0; p < width; p++)
				a[b][p] = 0;
		}
	}


	return (a);
}

