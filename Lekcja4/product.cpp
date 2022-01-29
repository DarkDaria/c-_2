#include <iostream>
#include <string>

using namespace std;

class Produkt {
    std::string producent;
    std::string nazwa;
    int *cena;
public:
    Produkt(std::string producent, std::string nazwa, int cena) {
        this->producent = producent;
        this->nazwa = nazwa;
        this->cena = new int(cena);
    }

    Produkt(const Produkt &p) //konstruktor kopiujący
    {

        producent = p.producent;
        nazwa = p.nazwa;
        this->cena = new int(*p.cena);
    }

    Produkt &operator=(Produkt &drugi) //operator przypisania
    {
        std::cout << "Dziala operator przypisania z argumentem typu Produkt\n";
        if (this == &drugi) {
            return *this;
        } else {
            producent = drugi.producent;
            nazwa = drugi.nazwa;
            delete this->cena; //uwaga na zwalnianie pamieci
            this->cena = new int(*drugi.cena);
            return *this;
        }
    }

    void ustaw_cene(int nowa_cena) {
        if (nowa_cena >= 0) {
            *cena = nowa_cena;
        }
    }

    int zwroc_cene() {
        return *cena;
    }

    ~Produkt() {
        delete cena;
        cout << "-Destruktor-" << endl;
    }
};

void product() {
    {
        Produkt myszka_rvm("Razer", "Viper Mini", 199);
        Produkt myszka_rvm_przecena(myszka_rvm);
        myszka_rvm_przecena.ustaw_cene(159);
        std::cout << "Cena Razer Viper Mini bez przeceny: " << myszka_rvm.zwroc_cene() << "\n";
        std::cout << "Cena Razer Viper Mini po przecenie: " << myszka_rvm_przecena.zwroc_cene() << "\n";
        myszka_rvm = myszka_rvm_przecena;
    }

    {
        Produkt myszka_lg100("Logitech", "G100", 1119);
        Produkt myszka_lg100s("Logitech", "G100s", 99);
        myszka_lg100 = myszka_lg100s;
        std::cout << "Cena Logotech G100: " << myszka_lg100.zwroc_cene() << "\n";
    }
}