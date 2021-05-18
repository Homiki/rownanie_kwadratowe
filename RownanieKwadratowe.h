#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;
                                  //plik z definicj¹ klasy zawieraj¹c¹ tylko deklaracje funkcji sk³adowych
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
