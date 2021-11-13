#include <iostream>

class X
{
public:
    int a;
    int b;

    X(int ap, int bp)
    {
        a = ap;
        b = bp;
        std::cout << "Kontruktor wieloargumentowy\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int konstruktor_5()
{
    X x(10,11);
    std::cout << "a= " << x.a << '\n';
    std::cout << "b= " << x.b << '\n';

    return 0;
}

