#include <iostream>

class X
{
public:
    int a;
    int b;

    X(int ap, int bp): a(ap), b(bp)
    {
        std::cout << "Kontruktor z lista inicjalizacyjna\n";
    };

    X(const X& X1)
    {
        a = X1.a;
        b = X1.b;
        std::cout << "Konstruktor kopiujacy\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int konstruktor_6()
{
    X x1(12,13);
    std::cout << "x1.a= " << x1.a << '\n';
    std::cout << "x1.b= " << x1.b << '\n';

    X x2(x1);
    std::cout << "x2.a= " << x2.a << '\n';
    std::cout << "x2.b= " << x2.b << '\n';

    X x3 = x1;
    std::cout << "x3.a= " << x3.a << '\n';
    std::cout << "x3.b= " << x3.b << '\n';

    X* ptr = &x1;
    int b1 =(*ptr).b;
    int b2 = ptr->b;
//  b1 i b2 to to samo, zapis ze strzalka to po prostu drugi, krotszy zapis.

    return 0;
}

