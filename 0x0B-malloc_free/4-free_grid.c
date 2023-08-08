#include <stdlib.h>
#include <string.h>
/**
 * free_grid - create an array
 *
 * @grid:char
 * @height:char
 *
 * Return:Null or pointer
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
