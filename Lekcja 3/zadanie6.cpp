//new delete

//#include <iostream>
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    int * ptr = new int(5);
//    delete ptr;
//
//    int *tab = new int[6]; //malloc
//    delete[] tab;
////nie uzywamy free(ptr)
class X
{
public:
    int a;
    int b;

    X(int ap, int bp): a(ap), b(bp)
    {
        std::cout << "Kontruktor z lista inicjalizacyjna\n";
    };

    X(int ap): a(ap+5), b(7)
    {
        std::cout << "Kontruktor z lista inicjalizacyjna\n";
    };

    ~X()
    {
        std::cout << "Destruktor\n";
    };
};


int main()
{
    X x(8,9);
    std::cout << "x.a= " << x.a << '\n';
    std::cout << "x.b= " << x.b << '\n';

    X y(20);
    std::cout << "y.a= " << y.a << '\n';
    std::cout << "y.b= " << y.b << '\n';


    return 0;
}
