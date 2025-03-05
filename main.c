#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "joystick.h"
#include "main.h"

int main()
{
	int x, y;
	char c = AGAIN;
	static int turn = 0;

	while (c == 'A') {
		system("clear");
		printf("Podaj x: ");
		scanf("%i", &x);
		printf("Podaj y: ");
		scanf("%i", &y);
		printf("\n");

		if (turn)
			showNewDot(updateDot(setX(checkValueFromUser(x)), setY(checkValueFromUser(y))));
		else
			showNewDot(updateDot(actualDot(x, y).x, actualDot(x,y).y));
		turn ^= 1;

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
}

struct Point actualDot(int x, int y)
{
	struct Point tmp = {.x = x, .y = y};
	return tmp;
}

int checkValueFromUser(int value)
{
	if (value > -6 && value < 6)
		return value;
	return 0;
}