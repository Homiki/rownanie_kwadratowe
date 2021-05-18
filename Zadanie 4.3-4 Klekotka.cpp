#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include "RownanieKwadratowe.h"
using namespace std;
                                       //plik z funkcja main()
int main()
{
	
	RownanieKwadratowe* dane = new RownanieKwadratowe();
	dane->czytaj_dane();
	dane->przetworz_dane();
	dane->wyswietl_wynik();
}

