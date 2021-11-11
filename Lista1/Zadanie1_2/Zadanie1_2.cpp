#include <iostream>
#include <string>

using namespace std;


void Zadanie1_2()
{
    string imie, nazwisko, login;

    cout << "podaj swoje imie i nazwisko\n";
    cin >> imie >> nazwisko;

    imie = imie.substr(0, 1);
    nazwisko = nazwisko.substr(0, 5);

    imie[0] = tolower(imie[0]);
    nazwisko[0] = tolower(nazwisko[0]);

    login = imie + nazwisko;
    if(login.length()<6){
        cout << login+"_____" << endl;
    } else{
        cout << login << endl;
    }
}