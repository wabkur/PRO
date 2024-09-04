#include "../headers/header.h"

/**
 * drawRect - draw a rectangle
 * @x: ..
 * @y: ..
 * @width: ..
 * @height: ..
 * @color: pixel color
*/

void drawRect(int x, int y, int width, int height, color_t color)
{
	int w, r;

	for (w = x; w <= (x + width); w++)
		for (r = y; r <= (y + height); r++)
			drawPixel(w, r, color);
}

/**
 * drawLine - Draw line
 * @x0: x ..
 * @y0: y ..
 * @x1: x ..
 * @y1: y ..
 * @color: pixel color
*/

void drawLine(int x0, int y0, int x1, int y1, color_t color)
{
	float xIncrement, yIncrement, currentX, currentY;
	int w, longestSideLength, deltaX,  deltaY;

	deltaX = (x1 - x0);
	deltaY = (y1 - y0);

	longestSideLength = (abs(deltaX) >= abs(deltaY)) ? abs(deltaX) : abs(deltaY);

	xIncrement = deltaX / (float)longestSideLength;
	yIncrement = deltaY / (float)longestSideLength;

	currentX = x0;
	currentY = y0;

	for (w = 0; w < longestSideLength; w++)
	{
		drawPixel(round(currentX), round(currentY), color);
		currentX += xIncrement;
		currentY += yIncrement;
	}
}