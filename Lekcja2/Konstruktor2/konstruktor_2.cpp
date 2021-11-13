#include <iostream>

class X
{
public:
    int a;
    int b;

    X(int ap = 3)
    {
        a = ap;
        b = 2;
        std::cout << "Kontruktor domyslny (bezparametrowy)\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int konstruktor_2()
{
    X x;
    std::cout << "x.a= " << x.a << '\n';
    std::cout << "x.b= " << x.b << '\n';

    X y(4);
    std::cout << "y.a= " << y.a << '\n';
    std::cout << "y.b= " << y.b << '\n';

    return 0;
}

