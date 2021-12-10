#include <iostream>

class Pracownik {

protected:
    std::string nazwisko;
    double stawka;
public:
    Pracownik(std::string pnazwisko, double pstawka) : nazwisko(pnazwisko), stawka(pstawka) {}

    double pensja(int liczba_godzin) {
        return liczba_godzin * stawka;
    }

    void wypisz() {
        std::cout << "Pracownik: " << nazwisko << ", stawka za godzine: " << stawka << std::endl;
    }
};

class Stazysta : public Pracownik {

private:
    int staz;

public:
    Stazysta(std::string snazwisko, double sstawka, int sdlugosc) : Pracownik(snazwisko, sstawka), staz(sdlugosc) {
        if (stawka > 15) {
            stawka = 15;
        }
    }

    double pensja(int liczba_godzin) {
        return liczba_godzin * stawka;
    }

    void wypisz() {
        std::cout << "Stazysta: " << nazwisko << ", stawka za godzine: " << stawka << ", staz pracy w miesiacach: "
                  << staz << std::endl;
    }
};

int Lekcja3_1() {

    Stazysta s1("Nowak", 19, 12);
    //std::cout << s1.pensja(15) << std::endl;
    s1.wypisz();
    return 1;
}