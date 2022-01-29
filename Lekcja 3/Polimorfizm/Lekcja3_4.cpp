#include <iostream>

class X1
{
public:

    // Wirtualny konstruktor nie jest mo�liwy, gdy� konstruktora
    // nie da si� wywo�a� poprzez wska�nik lub referencj�,
    // bo w momencie wo�ania konstruktora obiektu jeszcze nie ma.
    X1()
    {};

    virtual void f()
    {
        std::cout << "X1::f()\n";
    };

    // !!! Je�li klasa deklaruje jedn� ze swych funkcji jako virtual,
    // to destruktor tej klasy te� powinien by� virtual.
    virtual ~X1()
    {
        std::cout << "Destruktor X1\n";
    };
};

class Y1: public X1
{
public:

    Y1()
    {};

    void f()
    {
        std::cout << "Y1::f()\n";
    };

    ~Y1()
    {
        std::cout << "Destruktor Y1\n";
    };
};

class X2
{
public:

    X2()
    {};

    void f()
    {
        std::cout << "X2::f()\n";
    };

    ~X2()
    {
        std::cout << "Destruktor X2\n";
    };
};

class Y2: public X2
{
public:

    Y2()
    {};

    void f()
    {
        std::cout << "Y2::f()\n";
    };

    ~Y2()
    {
        std::cout << "Destruktor Y2\n";
    };
};

int Lekcja3_4()
{
    // Destruktor wirtualny w klasie bazowej zapewnia wywo�anie
    // wszystkich destruktor�w klas potomnych podczas niszczenia obiektu
    // (i tym samym prawid�owe zwolnienie pami�ci obiektu)
    X1 * pX1 = new Y1;
    delete pX1;


    std::cout << "\n";


    // Je�li destruktor nie jest wirtualny to destruktor klasy pochodnej
    // nie zostanie wywo�any
    X2 * pX2 = new Y2;
    delete pX2;


    return 0;
}



