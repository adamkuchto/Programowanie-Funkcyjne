#pragma once

struct Point {
	int x;
	int y;
};

/**
 * Ustawia wartość wychylenia w górę.
 * 
 * @param value - wartość.
 */
int setX(int value);

/**
 * Ustawia wartość wychylenia w dół.
 * 
 * @param value - wartość.
 */
int setY(int value);

/**
 * Zeruje wartości.
 */
void setZero();

/**
 * Ustawia punkt. 
 * 

 * @return Struktura point.
 */
struct Point updateDot(int x, int y);


/**
 * Wyświetla nową pozycję. 
 */
void showNewDot(struct Point point);
