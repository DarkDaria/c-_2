#include "Lista1/Zadanie1_1/Zadanie1_1.h"
#include "Lista1/Zadanie1_2/Zadanie1_2.h"
#include "Lista1/Zadanie1_3/Zadanie1_3.h"
#include "Lista1/Zadanie1_4/Zadanie_1_4.h"
#include "Lekcja2/Konstruktor1/konstruktor_1.h"
#include "Lekcja2/Konstruktor2/konstruktor_2.h"
#include "Lekcja2/Konstruktor_3/konstruktor_3.h"
#include "Lekcja2/Konstruktor_4/konstruktor_4.h"
#include "Lekcja2/Konstruktor_5/konstruktor_5.h"
#include "Lekcja2/Konstruktor_6/konstruktor_6.h"
#include "Lista2/Zadanie2_1/Zadanie2_1.h"
#include "Lista2/Zadanie2_2/Zadanie2_2.h"
#include "Lekcja 3/Dziedziczenie/Dziedziczenie_1.h"
#include "Lekcja 3/Dziedziczenie/Dziedziczenie_2.h"
#include "Lekcja 3/Dziedziczenie/Lekcja3_1.h"
#include "Lekcja 3/Polimorfizm/Polimorfizm_1.h"


#include <iostream>

using namespace std;

int main() {
    int numer;
    do {
        cout << "\n~~~ Czesc! wybierz numer zadania z listy: ~~~\n";
        cout << "- Lista 1: Numery od 1-10\n- Konstruktory od 11 do 16\n- Lista 2 od 21-?\n Dziedziczenie od 31";
        cout << "\n- Wpisz \"0\" aby wyjsc\n";
        cout << "WYBIERAM NUMER: ";
        cin >> numer;
        switch (numer) {
            case 1:
                Zadanie1_1();
                break;
            case 2:
                Zadanie1_2();
                break;
            case 3:
                Zadanie1_3();
                break;
            case 4:
                Zadanie1_4();
                break;
                //uzupelnic lista 1
            case 11:
                konstruktor_1();
                break;
            case 12:
                konstruktor_2();
                break;
            case 13:
                konstruktor_3();
                break;
            case 14:
                konstruktor_4();
                break;
            case 15:
                konstruktor_5();
                break;
            case 16:
                konstruktor_6();
                break;
            case 21:
                Zadanie2_1();
                break;
            case 22:
                Zadanie2_2();
                break;
            case 31:
                Dziedziczenie_1();
                break;
            case 32:
                Dziedziczenie_2();
                break;
            case 33:
                Lekcja3_1();
                break;
            case 34:
                Polimorfizm_1();
                break;
            default:
                break;
        }
    } while (numer != 0);
    return 0;
}