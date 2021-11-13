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


#include <iostream>

using namespace std;

int main() {
    int numer;
    do {
        cout<<"\n";
        cout << "Czesc! wybierz numer zadania z listy: ";
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
            default:
                break;
        }
    } while (numer != 0);
    return 0;
}