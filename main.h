#pragma once

#define AGAIN 'A'

/**
 * Zwraca strukturę z x i y. 

 * @param x - współrzędna siecznych. 
 * @param y - współrzędna odciętych. 
 * @return Struktura point.
 */
struct Point actualDot(int x, int y);

/**
 * Sprawdza podaną wartość.
 * 
 * @param value Wartość pobrana od Użytkownika. 
 * @return value - jesli jest poprawna, 0 - jesli poza zakresem.
 */
int checkValueFromUser(int value);