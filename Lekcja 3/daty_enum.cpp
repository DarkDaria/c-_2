#include <iostream>

using namespace std;
enum dtygodnia {
    pn, wt, sr, cz, pt, so, nd
};
struct Date {
    dtygodnia dtygodnia;
    int dzien;
    int miesiac;
    int rok;
};

int main() {

    Date dzisiaj;
    dzisiaj.dtygodnia = dtygodnia::so;
    dzisiaj.dzien = 15;
    dzisiaj.miesiac = 5;
    dzisiaj.rok = 2021;
//wyswieltanie daty nie da sie w latwy sposob wyswietlic so zamiast 5
    cout << dzisiaj.dtygodnia << "," << dzisiaj.dzien << "/" << dzisiaj.miesiac << "/" << dzisiaj.rok << endl;
    return 0;

}
