#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

class Ulamek {
private:
    int Mianownik;
    int Licznik;


public:
    Ulamek() {									//konstruktor domyslny
        Mianownik = 1;
        Licznik = 1;
    }

    Ulamek(int a, int b) {						//konstruktor parametrowy
        Mianownik = a;
        Licznik = b;
    }

    Ulamek operator-()							//zamiana znaku w liczniku
    {
        Ulamek k;
        k.Mianownik = -(this->Mianownik);
        k.Licznik = this->Licznik;
        return k;
    }

    Ulamek operator*(const int c) {				//mnozenie przez stala zmienna
        Ulamek k;
        k.Licznik = this->Licznik * c;
        k.Mianownik = this->Mianownik;
        return k;
    }

    Ulamek& operator=(Ulamek& drugi)
    {
        std::cout << "Dziala operator przypisania z argumentem typu X\n";
        if (this == &drugi)
            return *this;

        this->Mianownik = drugi.Mianownik;
        this->Licznik = drugi.Licznik;
        return *this;
    }

    // Mozemy tez definiowac operator przypisania innych typow (jesli to ma sens dla danej klasy)
    Ulamek& operator=(int a)
    {
        std::cout << "Dziala operator przypisania z argumentem typu int\n";
        this->Licznik = a;
        return *this;
    }

    friend Ulamek operator-(const Ulamek& k1, const Ulamek& k2);
    friend Ulamek operator+(const Ulamek& k1, const Ulamek& k2);
    friend Ulamek operator*(const int c, const Ulamek& k1);
    friend Ulamek operator+(const Ulamek& k1, const Ulamek& k2);	//operatory dodawania,odejmowania,mnozenia i dzielenia

    friend bool operator==(const Ulamek& k1, const Ulamek& k2);
    friend bool operator<=(const Ulamek& k1, const Ulamek& k2);
    friend bool operator>=(const Ulamek& k1, const Ulamek& k2);
    friend bool operator>(const Ulamek& k1, const Ulamek& k2);
    friend bool operator<(const Ulamek& k1, const Ulamek& k2);
    friend bool operator!=(const Ulamek& k1, const Ulamek& k2);		//operatory porównawcze


    friend std::ostream& operator<<(std::ostream&, Ulamek&);
    friend std::istream& operator>>(std::istream&, Ulamek&);

    void wypisz(Ulamek& x) {
        cout << "Licznik:" << x.Licznik << endl << "Mianownik" << x.Mianownik;
    }

    int& operator[](int i)
    {
        if (i == 0)
            return Licznik;
        else if (i == 1)
        {
            return Mianownik;
        }
        else {
            throw out_of_range("podana inna cyfra niz 0 lub 1");
        }
    }

    operator double() {
        return double(this->Licznik) / double(this->Mianownik);
    }
};

std::ostream& operator<<(std::ostream& wyjscie, Ulamek& x) {
    wyjscie << "Licznik: " << x.Licznik << "Mianownik: " << x.Mianownik;
    return wyjscie;
}

std::istream& operator>>(std::istream& wejscie, Ulamek& x) {
    wejscie >> x.Licznik >> x.Mianownik;
    return wejscie;
}



Ulamek operator+(const Ulamek& x1, const Ulamek& x2)
{
    Ulamek s;
    s.Licznik = (x1.Licznik * x2.Mianownik) + (x2.Licznik * x1.Mianownik);
    s.Mianownik = x1.Mianownik * x2.Mianownik;
    return s;
}

Ulamek operator-(const Ulamek& x1, const Ulamek& x2)
{
    Ulamek s;
    s.Licznik = (x1.Licznik * x2.Mianownik) - (x2.Licznik * x1.Mianownik);
    s.Mianownik = x1.Mianownik * x2.Mianownik;
    return s;
}

Ulamek operator*(const int c, const Ulamek& x)
{
    Ulamek s;
    s.Licznik = c * x.Licznik;
    s.Mianownik = x.Mianownik;
    return s;
}

bool operator==(const Ulamek& x1, const Ulamek& x2)
{
    return (x1.Licznik * x2.Mianownik) == (x2.Licznik * x1.Mianownik);
}

bool operator<=(const Ulamek& x1, const Ulamek& x2)
{
    return (x1.Licznik * x2.Mianownik) <= (x2.Licznik * x1.Mianownik);
}

bool operator<(const Ulamek& x1, const Ulamek& x2)
{
    if ((x1.Licznik * x2.Mianownik) < (x2.Licznik * x1.Mianownik))
        return true;
    else
        return false;
}

bool operator>=(const Ulamek& x1, const Ulamek& x2)
{
    return (x1.Licznik * x2.Mianownik) >= (x2.Licznik * x1.Mianownik);
}

bool operator>(const Ulamek& x1, const Ulamek& x2)
{
    if ((x1.Licznik * x2.Mianownik) > (x2.Licznik * x1.Mianownik))
        return true;
    else
        return false;
}

bool operator!=(const Ulamek& x1, const Ulamek& x2)
{
    return (x1.Licznik * x2.Mianownik) != (x2.Licznik * x1.Mianownik);
}

void ulamek() {
    Ulamek k1;
    Ulamek k2(1, 3), k3(3, 1);

    k1.wypisz(k1);
    k1 = 2;
    k1.wypisz(k1);

    try
    {
        k1[2];
    }
    catch (const std::out_of_range& oor)
    {
        cout << "wrong index" << oor.what();
    }

    if (k2 < k3) {
        cout << "k1 < k3";
    }
    else if (k2 > k3) {
        cout << "k1 > k3";
    }
    else if (k2 == k3) {
        cout << "k1 == k3";
    }
}