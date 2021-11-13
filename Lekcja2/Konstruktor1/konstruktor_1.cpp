#include <iostream>
#include "stdlib.h"
class X
{
public:
    int a;
    int b;

    X()
    {
        a = 1;
        b = 2;
        std::cout << "Kontruktor domyslny (bezparametrowy)\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};

int konstruktor_1()
{
    X x;

    std::cout << "a= " << x.a << '\n';
    std::cout << "b= " << x.b << '\n';

    return 0;
}

