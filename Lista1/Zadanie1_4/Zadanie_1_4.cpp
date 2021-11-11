//zadanie 4 Napisz funkcję, która tworzy tablice o określonym w argumencie rozmiarze oraz
//funkcje, która uzupełnia te tablice losowymi wartościami z zakresu 1-100 (wykorzystaj
//std::rand()).

#include <iostream>
#include <cstdlib>
using namespace std;

void Zadanie1_4() {
    int n = 5;
    int* tab;
    tab = new int[n];
    for (int i = 0; i < n; ++i) {
        tab[i] = rand() % 10 + 1; //tab[i] == *(tab+i)
        cout << tab[i]<<" ";
    }
    delete[] tab;
}