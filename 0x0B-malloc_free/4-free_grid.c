#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  *
  * @grid: input grid
  * @height: input int
  *
  * Return: results
  */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; i < height; a++)
		free(grid[a]);
	free(grid);
}
