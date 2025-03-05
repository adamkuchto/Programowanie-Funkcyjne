#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define ROWS 13 
#define COLS ROWS 

/**
 * Struktura współrzędnych. 
 */
struct Point {
	int x; ///< Punkt na osi x.
	int y; ///< Punkt na osi Y.
};

/**
 * Ustawia wartość osi x.
 * 
 * @param value - wartość.
 * @return value - jeśli jest poprawna, 0 - jeśli poza zakresem.
 */
int setX(int value);

/**
 * Ustawia wartość osi y.
 * 
 * @param value - wartość.
 * @return value - jesli jest poprawna, 0 - jesli poza zakresem.
 */
int setY(int value);

/**
 * Zeruje wartości.
 */
void setZero();

/**
 * Ustawia punkt. 
 * 
 * @param x - współrzędna siecznych. 
 * @param y - współrzędna odciętych. 
 * @return Struktura point.
 */
struct Point updateDot(int x, int y);


/**
 * Wyświetla nową pozycję. 
 */
void showNewDot(struct Point point);

#ifdef __cplusplus
}
#endif