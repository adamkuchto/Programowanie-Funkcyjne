#pragma once

#define AGAIN 'A'
#define BAD_VALUE 255

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

/**
 * Informuje o niepoprawnej wartości.  
 * 
 * @param value - Wartość wprowadzona przez użytkownika.
 * @return value - Niezmieniona wartość wprowadzona przez użytkownika.
 */
int printInfoBadValue(int value);