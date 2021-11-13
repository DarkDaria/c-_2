#include <iostream>

class X
{
public:
    int a;
    int b;

    X(int ap = 3, int bp = 5)
    {
        a = ap;
        b = bp;
        std::cout << "Kontruktor domyslny (bezparametrowy)\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int konstruktor_3()
{
    X x;
    std::cout << "x.a= " << x.a << '\n';
    std::cout << "x.b= " << x.b << '\n';

    X y(4);
    std::cout << "y.a= " << y.a << '\n';
    std::cout << "y.b= " << y.b << '\n';

    X z(6,7);
    std::cout << "z.a= " << z.a << '\n';
    std::cout << "z.b= " << z.b << '\n';

    return 0;
}

