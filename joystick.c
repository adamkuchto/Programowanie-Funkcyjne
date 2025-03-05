#include <stdio.h>
#include "joystick.h"

int setX(int value)
{
	if(value > -5 && value < 6)
		return value;
	return 0;
}

int setY(int value)
{
	if(value > -5 && value < 6)
		return value;
	return 0;
}

struct Point updateDot(int x, int y)
{
	struct Point point;

	if (x == -5) point.x = 0;
	if (x == -4) point.x = 1;
	if (x == -3) point.x = 2;
	if (x == -2) point.x = 3;
	if (x == -1) point.x = 4;
	if (x == 0) point.x = 5;
	if (x == 1) point.x = 6;
	if (x == 2) point.x = 7;
	if (x == 3) point.x = 8;
	if (x == 4) point.x = 9;
	if (x == 5) point.x = 10;

	if (y == -5) point.y = 10;
	if (y == -4) point.y = 9;
	if (y == -3) point.y = 8;
	if (y == -2) point.y = 7;
	if (y == -1) point.y = 6;
	if (y == 0) point.y = 5;
	if (y == 1) point.y = 4;
	if (y == 2) point.y = 3;
	if (y == 3) point.y = 2;
	if (y == 4) point.y = 1;
	if (y == 5) point.y = 0;

	return point;
}

void showNewDot(struct Point point)
{
	char tab[11][11] = {
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {'x', 'x', 'x', 'x', 'x', '0', 'x', 'x', 'x', 'x', 'x'},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', 'y', ' ', ' ', ' ', ' ', ' '}
	};

	tab[point.x][point.y] = '+';

	for (int y = 0; y < 11; y++) {
		for (int x = 0; x < 11; x++) {
			printf("%c", tab[x][y]);
		}
		printf("\n");
	}
}
