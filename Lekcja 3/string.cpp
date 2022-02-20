//Zadanie1. Napisz program wczytujący od użytkownika imię i wiek w latach, wypisujący
//powitanie: "Cześć, [imie]! Twój wiek liczony w miesiącach wynosi [wartość]". Jeśli
//użytkownik ma wiecej niz 18 lat, program wypisuje dodatkowo "Jesteś pełnoletni". Użyj w
//programie nowego typu wbudowanego bool.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string imienazwisko;
    cin >> imienazwisko;

    getline(cin, imienazwisko);

    imienazwisko.length();
    char c = imienazwisko[0];
    char ostatni = imienazwisko[imienazwisko.length() - 1];

    imienazwisko[0] = 'Z';

    string nazwisko = "Kowalski";
    cout << imienazwisko + nazwisko + 'a';

    imienazwisko.substr(1, 4);

    size_t index = imienazwisko.find(" ");
    if(index != string::npos)
        return 0;
}