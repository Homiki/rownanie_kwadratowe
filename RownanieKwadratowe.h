#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;
                                  //plik z definicj� klasy zawieraj�c� tylko deklaracje funkcji sk�adowych
class RownanieKwadratowe 
{
	double a, b, c;
	double delta;
	double x0, x1, x2;

public:
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
};
