#include <stdio.h>
#include "joystick.h"

int setX(int value)
{
	if(value > -6 && value < 6)
		return value;
	return 0;
}

int setY(int value)
{
	if(value > -6 && value < 6)
		return value;
	return 0;
}

struct Point updateDot(int x, int y)
{
	struct Point point;
//TODO Dodać tworzenie tej zależności automatycznie.
	if (x == -5) point.x = 1;
	if (x == -4) point.x = 2;
	if (x == -3) point.x = 3;
	if (x == -2) point.x = 4;
	if (x == -1) point.x = 5;
	if (x == 0) point.x = 6;
	if (x == 1) point.x = 7;
	if (x == 2) point.x = 8;
	if (x == 3) point.x = 9;
	if (x == 4) point.x = 10;
	if (x == 5) point.x = 11;

	if (y == -5) point.y = 11;
	if (y == -4) point.y = 10;
	if (y == -3) point.y = 9;
	if (y == -2) point.y = 8;
	if (y == -1) point.y = 7;
	if (y == 0) point.y = 6;
	if (y == 1) point.y = 5;
	if (y == 2) point.y = 4;
	if (y == 3) point.y = 3;
	if (y == 4) point.y = 2;
	if (y == 5) point.y = 1;

	return point;
}

void showNewDot(struct Point point)
{
	char tab[COLS][ROWS] = {
    {'+','|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '+'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-','+', '+', '+', '+', '+', '+', '+', '+', '+', '+', '+', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'-',' ', ' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' ', ' ', '-'},
    {'+','|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '+'}
	};

	tab[point.x][point.y] = 'O';

	printf("\033[1;32m");
	for (int y = 0; y < COLS; y++) {
		for (int x = 0; x < ROWS; x++) {
			printf("%c ", tab[x][y]);
		}
		printf("\n");
	}
	printf("\033[0m");
}
