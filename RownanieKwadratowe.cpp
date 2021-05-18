#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include "RownanieKwadratowe.h"
using namespace std;
                                     // plik z definicjami funkcji sk³adowych
void RownanieKwadratowe::czytaj_dane()
{
	cout << "Podaj a\n";
	cin >> a;
	if (a == 0)
	{
		cout << "Parametr 'a' musi rozny od zera :)";
		exit(0);
	}
	cout << "Podaj b\n";
	cin >> b;
	cout << "Podaj c\n";
	cin >> c;

}

void RownanieKwadratowe::przetworz_dane()
{
	delta = (b * b) - 4 * a * c;
	if (delta < 0) {
		cout << "Sprzecznosc, delta ujemna\nDelta = " << delta << endl;
		exit(0);
	}
	if (delta == 0) {
		x0 = -b / 2 * a;
	}
	x1 = (-b + sqrt(delta)) / 2 * a;
	x2 = (-b - sqrt(delta)) / 2 * a;
}

void RownanieKwadratowe::wyswietl_wynik()
{
	if (delta == 0)
	{
		cout << setprecision(2) << fixed << "a = " << a << endl;
		cout << setprecision(2) << fixed << "b = " << b << endl;
		cout << setprecision(2) << fixed << "c = " << c << endl;
		cout << setprecision(2) << fixed << "Delta = " << delta << endl;
		cout << setprecision(2) << fixed << "x0 = " << x0 << endl;
	}
	else
	{
		cout << setprecision(2) << fixed << "a = " << a << endl;
		cout << setprecision(2) << fixed << "b = " << b << endl;
		cout << setprecision(2) << fixed << "c = " << c << endl;
		cout << setprecision(2) << fixed << "Delta = " << delta << endl;
		cout << setprecision(2) << fixed << "x1 = " << x1 << endl;
		cout << setprecision(2) << fixed << "x2 = " << x2 << endl;
	}

}
