#include <iostream>

class X
{
public:
    // Funkcja abstrakcyjna - metoda, dla ktorej podano jedynie nazwe,
    // liste argumentow i typ zwracanej wartosci,
    // natomiast calkowicie pominieto jej cialo,
    // pozostawiajac implementacje klasom pochodnym.
    // Klasa abstrakcyjna - klasa, w ktorej umieszczono jedna lub wiecej
    // funkcji abstrakcyjnych (poza tym w klasie abstrakcyjnej moga byc
    // oczywiscie tez funkcje nieabstrakcyjne).
    // Funkcja abstrakcyjna w C++ to tzw. funkcja czysto wirtualna.
    virtual void f1() = 0; //ta funkcja istnieje ale to tylko zasygnalizowanie, nic konkretnego

    // niedozwolone przekazywanie i zwracanie przez wartosc
    // obiektu klasy abstrakcyjnej
    //void f2(X x) {};
    //X f3() {};

    // dozwolone przekazywanie i zwracanie przez referencje lub wskaznik
    // obiektu klasy abstrakcyjnej
    // (w rzeczywistosci moze byc to tylko obiekt nieabstrakcyjnej klasy pochodnej)
    void f4(X& x) {};
     X& f5() {}; //cos nie tak dziala ale kompilator sie czepia Warning: no return statement in function returning non-void [-Wreturn-type]

};

class Y: public X
{
public:

    void f1()
    {
        std::cout << "Y1::f()\n";
    };
};


int Lekcja3_3()
{
    // Nie mozna utworzyc obiektu klasy abstrakcyjnej
    //X x;
    X * pX;
    //pX = new X;
    //delete pX;

    Y y;

    Y * pY = new Y;
    delete pY;

    // dozwolone !
    pX = new Y;
    delete pX;

    return 0;
}