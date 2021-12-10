#include <iostream>

class X1 {
public:
    // Slowo virtual pojawia sie tylko przy deklaracji funkcji wewnatrz ciala klasy.
    // Jesli definicja funkcji skladowej jest poza cialem klasy, to przy definicji funkcji nie powtarza sie juz slowa virtual.
    // Slowo virtual potrzebne jest tylko w klasie podstawowej i nie musi juz byc powtarzane przy analogicznych funkcjach w klasach pochodnych.
    // Wszystkie funkcje o takim naglowku w klasach pochodnych beda automatycznie wirtualne.
    virtual void f() {
        std::cout << "X1::f()\n";
    };
};

class Y1 : public X1 {
public:

    void f() {
        std::cout << "Y1::f()\n";
    };
};

class X2 {
public:

    void f() {
        std::cout << "X2::f()\n";
    };

};

class Y2 : public X2 {
public:

    void f() {
        std::cout << "Y2::f()\n";
    };

};

int Polimorfizm_1() {
    X1 x1;   // deklaracja obiektu z klasy X1
    X1 *pX1; //wskaznik na jakis obiekt w klasie X1
    Y1 y1;
    Y1 *pY1;

    x1.f();
    y1.f();

    pX1 = new X1; //tez tworzymy nowy obiekt z X1
    pX1->f(); //przejdz do adresu pX1 ....
    delete pX1;

    pY1 = new Y1;
    pY1->f();
    delete pY1;

    // Polimorfizm dynamiczny ujawnia sie tylko przy wywolaniach metod
    // za pomoca odnosnika (wskaznika, refrencji), a nie obiektu.
    pX1 = new Y1;
    pX1->f(); //Y1::f();
    //(*pX1).f(); inny zapis (wyluskanie adresu danej klasy i odwolanie sie z listy funkcji)
    delete pX1;

    std::cout << "\n";

    X2 x2;
    X2 *pX2;
    Y2 y2;
    Y2 *pY2;

    x2.f();
    y2.f();

    pX2 = new X2;
    pX2->f();
    delete pX2;

    pY2 = new Y2;
    pY2->f();
    delete pY2;

    /* !!! */
    pX2 = new Y2;
    pX2->f(); //naglowek typ metody i argumenty wzwracane sa takie same wiec pasujace bardzoje z klasy bazowej. Funkcja virtualna tak diala ze dopasowywuje najbardziej pasujaca
    delete pX2;

    return 0;
}



