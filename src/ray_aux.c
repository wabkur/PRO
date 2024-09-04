#include "../headers/header.h"

/**
 * distanceBetweenPoints - Finds horizontal intersection with the wall
 * @x1: ..
 * @y1: ..
 * @x2: ..
 * @y2: ..
 * Return: The distance between two points.
 */

float distanceBetweenPoints(float x1, float y1, float x2, float y2)
{
	return (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}

/**
 * isRayFacingDown - check if the ray is facing down
 * @angle: ..
 * Return: true or false
 */

bool isRayFacingDown(float angle)
{
	return (angle > 0 && angle < PI);
}

/**
 * isRayFacingUp - check if the ray is facing up
 * @angle: ..
 * Return: true or false
 */

bool isRayFacingUp(float angle)
{
	return (!isRayFacingDown(angle));
}

/**
 * isRayFacingRight - check if the ray is facing to the right
 * @angle: ..
 * Return: true or false
 */

bool isRayFacingRight(float angle)
{
	return (angle < 0.5 * PI || angle > 1.5 * PI);
}

/**
 * isRayFacingLeft - check if the ray is facing to the right
 * @angle: ..
 * Return: true or false
 */

bool isRayFacingLeft(float angle)
{
	return (!isRayFacingRight(angle));
}