#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Print_grid - frees a 2 dimensional grid
 * @grid: 2
 * @height: height dimension of grid
 * Description: frees a two dimensional grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
