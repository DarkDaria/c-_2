#include <iostream>
using namespace std;

void Zadanie1_1()
{
    int wiek, miesiace;
    string imie;

    cout << "podaj swoje imie: \n";
    cin >> imie;
    cout << "podaj swoj wiek: \n";
    cin >> wiek;

    miesiace = wiek * 12;
    cout << "\nCzesc, " << imie << ".\nTwoj wiek liczony w miesiacach wynosi: " << miesiace;
    bool pelnoletni = wiek >= 18;
    if (pelnoletni)
    {
        cout << "\n Jestes pelnoletni!";

    }
}