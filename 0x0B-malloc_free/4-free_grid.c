#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees the memory allocate
 * the grid created by alloc_grid() prototype
 * created by alloc_grid()
 * @grid: grid to be free 'ed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int n;

if (grid == NULL || height == 0)
return;
for (n = 0; n < height; n++)
free(grid[n]);
free(grid);
}
