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

//    to samo co
//    X(int ap, int bp)
//    {
//        a = ap;
//        b = bp;
//        std::cout << "Kontruktor z lista inicjalizacyjna\n";
//    };

    X(int ap): a(ap+5), b(7)
    {
        std::cout << "Kontruktor z lista inicjalizacyjna\n";
    };

//    to samo co
//    X(int ap): a(ap+5), b(7)
//    {
//        a = ap + 5;
//        b = 7;
//        std::cout << "Kontruktor z lista inicjalizacyjna\n";
//    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int konstruktor_4()
{
    X x(8, 9);
    std::cout << "x.a= " << x.a << '\n';
    std::cout << "x.b= " << x.b << '\n';

    X y(20);
    std::cout << "y.a= " << y.a << '\n';
    std::cout << "y.b= " << y.b << '\n';


    return 0;
}

