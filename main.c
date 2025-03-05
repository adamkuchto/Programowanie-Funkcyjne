#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "joystick.h"

struct Point actualDot(int x, int y);
int getValueFromUser(int value);

int main()
{
	int x, y;
	char c = 'A';
	static int turn = 0;

	while (c == 'A') {
		system("clear");
		printf("Podaj x: ");
		scanf("%i", &x);
		printf("Podaj y: ");
		scanf("%i", &y);
		printf("\n");

		if (turn)
			showNewDot(updateDot(setX(getValueFromUser(x)), setY(getValueFromUser(y))));
		else
			showNewDot(updateDot(actualDot(x, y).x, actualDot(x,y).y));
		turn ^= 1;

		printf("%i", turn);
		printf("\n");

		do {
			printf("Press (A)gain - or (E)xit \n");
			scanf(" %c", &c);
			c = toupper(c);
			putchar(c);
			printf("\n");
 		} while (c != 'A' && c != 'E');

	}

	exit(EXIT_SUCCESS);

	return 0;
}

struct Point actualDot(int x, int y)
{
	struct Point tmp = {.x = x, .y = y};
	return tmp;
}

int getValueFromUser(int value)
{
	if (value > -6 && value < 6)
		return value;
	return 0;
}