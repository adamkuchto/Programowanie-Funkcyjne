#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "joystick.h"
#include "main.h"

int main()
{
	int x, y;
	char c = AGAIN;
	static int turn = 1;

	while (c == 'A') {
		system("clear");
		printf("Podaj x: ");
		scanf("%i", &x);
		printf("Podaj y: ");
		scanf("%i", &y);
		printf("\n");

		if (turn)
			// Zestaw nr 1.
			showNewDot(updateDot(setX(printInfoBadValue(checkValueFromUser(x))),
								setY(printInfoBadValue(checkValueFromUser(y)))));
		else
			// Zestaw nr 2.
			showNewDot(updateDot(printInfoBadValue(actualDot(x, y).x),
								printInfoBadValue(actualDot(x,y).y)));
		turn ^= 1;

		int set = 1;
		printf("\nUruchomiono zestaw: %i\n", set+turn);

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

int printInfoBadValue(int value)
{
	if (value == 0)
		printf("\033[1;31mInvalid value\033[0m\r\n");
	return value;
}