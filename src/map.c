#include "../headers/header.h"

static const int map[MAP_NUM_ROWS][MAP_NUM_COLS] = {
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 6, 0, 0, 0, 6, 0, 0, 0, 6},
	{6, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 6, 0, 7, 7, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 6},
	{6, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 1, 0, 0, 0, 0, 7, 7, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 1, 0, 6},
	{6, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 1, 0, 6},
	{6, 0, 0, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6}
};

/**
 * isInsideMap - check if we continue within the map
 * @w: ..
 * @r: ..
 * @Return: True if is within the map, otherwise false
*/

bool isInsideMap(float w, float r)
{
	return (w >= 0 && w <= MAP_NUM_COLS * TILE_SIZE &&
			r >= 0 && r <= MAP_NUM_ROWS * TILE_SIZE);
}

/**
 * DetectCollision - Checks if there could be a collision
 * @w: ..
 * @r: ..
 * Return: true if collision is detected, false otherwise
*/

bool DetectCollision(float w, float r)
{
	int mapGridW, mapGridR;

	if (w < 0 || w >= MAP_NUM_COLS * TILE_SIZE ||
		r < 0 || r >= MAP_NUM_ROWS * TILE_SIZE)
		return (true);

	mapGridW = floor(w / TILE_SIZE);
	mapGridR = floor(r / TILE_SIZE);
	return (map[mapGridW][mapGridR] != 0);
}

/**
 * getMapValue - check if we continue within the map
 * @row: ..
 * @col: ..
 * @Return: The position value in the map
*/

int getMapValue(int row, int col)
{

	return (map[row][col]);

}

/**
 * renderMap - rendering the map
*/

void renderMap(void)
{
	int t, p, tileX, tileY;
	color_t tileColor;

	for (t = 0; t < MAP_NUM_ROWS; t++)
	{
			for (p = 0; p < MAP_NUM_COLS; p++)
			{
						tileX = t * TILE_SIZE;
						tileY = p * TILE_SIZE;
						tileColor = map[t][p] != 0 ? 0xFFFFFFFF : 0x00000000;

						drawRect(
										tileX* MINIMAP_SCALE_FACTOR,
										tileY *MINIMAP_SCALE_FACTOR,
										TILE_SIZE* MINIMAP_SCALE_FACTOR,
										TILE_SIZE *MINIMAP_SCALE_FACTOR,
										tileColor
									);
			}
	}
}