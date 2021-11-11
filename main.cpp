#include "Lista1/Zadanie1_1/Zadanie1_1.h"
#include "Lista1/Zadanie1_2/Zadanie1_2.h"
#include "Lista1/Zadanie1_3/Zadanie1_3.h"
#include "Lista1/Zadanie1_4/Zadanie_1_4.h"
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
            default:
                break;
        }
    } while (numer != 0);
    return 0;
}