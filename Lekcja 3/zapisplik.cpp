#include <iostream>
#include <fstream>

class X {
    int a;
public:
    X(int a = 0)
    {
        this->a = a;
//operator rzutowania
    }

    X & operator=(X & drugi)
// = operator przypisania co ma sie dziac jak pzypiszemy jeden obiekt do drugiego (ten akurat domyslny jest i nie trzeba go dostarczac bo kompilator to zrobi automatycznie)
    {
        std::cout << "Dziala operator przypisania z argumentem typu X\n";
        if (this == &drugi) //czy nie robimy przypisania na ten sam obiekt (czy adres jest taki sam)
            return *this;

        this->a = drugi.a; //jezeli sa rozne to robimy kopiowanie element po elemencie
        return *this;
    }

    // Mozemy tez definiowac operator przypisania innych typow (jesli to ma sens dla danej klasy)
    //nie robimy sprawdzania czy to to samo bo sa rozne typy a nie robimy rzutowania na ten sam typ
    X & operator=(int a)
    {
        std::cout << "Dziala operator przypisania z argumentem typu int\n";
        this->a = a;
        return *this;
    }

    friend std::ostream & operator<<(std::ostream &, X &);
    friend std::istream & operator>>(std::istream &, X &);

    operator int() // co ma sie stac jak rzutujemy  na int
    {
        return this->a;
    }
};

// Ta definicja operatora bedzie miala zastosowanie zawsze gdy obiekt
// bedacy po lewej stronie operatora '<<' jest klasy std::ostream lub pochodna tej klasy
//https://www.cplusplus.com/reference/ostream/ostream/
// Np.: obiekt cout lub obiekty reprezentujace pliki
// (ktore same sa instancjami klasy ofstream) itd.
//mozemy wypisac obiekty z klasy X za pomoca wyjscie a nie cout ze wzgledu na to ze sa one zaprzyjaznione
std::ostream & operator<<(std::ostream & wyjscie, X & x) {
    wyjscie << "Zawartosc obiektu: " << x.a;
    return wyjscie;
}

// Ta definicja operatora bedzie miala zastosowanie zawsze gdy obiekt
// bedacy po lewej stronie operatora '<<' jest klasy std::istream lub pochodna tej klasy
// https://www.cplusplus.com/reference/istream/istream/
// Np.: obiekt cin; obiekty reprezentujace pliki (ktore same sa instancjami klasy fistream)
std::istream & operator>>(std::istream & wejscie, X & x) {
    wejscie >> x.a;
    return wejscie;
}

int square(int a)
{
    return a * a;
}

int test() {
    X x1, x2(4);

    std::cout << "Dzialanie std::cout << x1: \n";
    std::cout << x1 << std::endl;

    std::cout << "\nDzialanie X x3 = x1: \n";
    X x3 = x1; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp: automatyczny konstruktor kopiujacy
    //tworzymy obiekt nowy x3 z klasy X. Konsktruktor kopiujacy (kompilator sam utworzyl taki wygenerowal automatycznie)
    // X x3(x1)

    std::cout << "\nDzialanie x1 = x2: \n";
    //sprawdzanie czy to nie to samo
    x1 = x2; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp: operator przypisania

    std::cout << "\nDzialanie x2 = 8: \n";
    //przypisanie z argumentem typu int
    x2 = 8; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp:

    std::cout << "\nstd::cout << x1 << x2 << x3 \n";
    std::cout << x1 << " " << x2 << " " << x3 << std::endl; //cout jest obiektem z ostream 48 linijka ( std::cout << x1) to po prostu wywolanie funkcji wypisujacej tylko zmieniaja sie argumenty

    std::cout << "\nOperator >> x1: \n";
    std::cin >> x1;
    std::cout << "\n" << x1;


    std::ofstream plik("X.txt");
    if (plik.is_open())
    {
        plik << x1 << x2;
        plik.close();
    }
    else std::cout << "Unable to open file";

    // Niejawne uzycie operator konwersji operator int()
    std::cout << std::endl;
    std::cout << x1 << " podniesiona do kwadratu wynosi: " << square(x1) << std::endl; //sqare(x1) a nie square(int x1) bo zawsze rzutuje na int


    return 0;
}