#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Each element of the grid should be initialized to 0
 * @width: width input
 * @height: height input
 * Return: Null on failure
 */
int **alloc_grid(int width, int height)
{
int **allo;
int a, z;

if (width <= 0 || height <= 0)
return (NULL);
allo = malloc(sizeof(int *) * height);
if (allo == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
allo[a] = malloc(sizeof(int) * width);
if (allo[a] == NULL)
{
for (; a >= 0; a--)
free(allo[a]);
free(allo);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (z = 0; z < width; z++)
allo[a][z] = 0;
}
return (allo);
}
