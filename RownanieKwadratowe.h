#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;
                                  //plik z definicją klasy zawierającą tylko deklaracje funkcji składowych
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
