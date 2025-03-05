#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Struktura współrzędnych. 
 */
struct Point {
	int x; ///< Punkt na osi x.
	int y; ///< Punkt na osi Y.
};

/**
 * Ustawia wartość wychylenia w górę.
 * 
 * @param value - wartość.
 * @return value - jeśli jest poprawna, 0 - jeśli poza zakresem.
 */
int setX(int value);

/**
 * Ustawia wartość wychylenia w dół.
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