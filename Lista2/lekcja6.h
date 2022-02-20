//#include <iostream>
//#include <fstream>
//
//class X {
//    int a;
//public:
//    X(int a = 0)
//    {
//        this->a = a;
//    }
//
//    X & operator=(X & drugi)
//    {
//        std::cout << "Dziala operator przypisania z argumentem typu X\n";
//        if (this == &drugi)
//            return *this;
//
//        this->a = drugi.a;
//        return *this;
//    }
//
//    // Mozemy tez definiowac operator przypisania innych typow (jesli to ma sens dla danej klasy)
//    X & operator=(int a)
//    {
//        std::cout << "Dziala operator przypisania z argumentem typu int\n";
//        this->a = a;
//        return *this;
//    }
//
//    friend std::ostream & operator<<(std::ostream &, X &);
//    friend std::istream & operator>>(std::istream &, X &);
//
//    operator int()
//    {
//        return this->a;
//    }
//};
//
//// Ta definicja operatora bedzie miala zastosowanie zawsze gdy obiekt
//// bedacy po lewej stronie operatora '<<' jest klasy std::ostream lub pochodna tej klasy
//// https://www.cplusplus.com/reference/ostream/ostream/
//// Np.: obiekt cout lub obiekty reprezentujace pliki
//// (ktore same sa instancjami klasy ofstream) itd.
//std::ostream & operator<<(std::ostream & wyjscie, X & x) {
//    wyjscie << "Zawartosc obiektu: " << x.a;
//    return wyjscie;
//}
//
//// Ta definicja operatora bedzie miala zastosowanie zawsze gdy obiekt
//// bedacy po lewej stronie operatora '<<' jest klasy std::istream lub pochodna tej klasy
//// https://www.cplusplus.com/reference/istream/istream/
//// Np.: obiekt cin; obiekty reprezentujace pliki (ktore same sa instancjami klasy fistream)
//std::istream & operator>>(std::istream & wejscie, X & x) {
//    wejscie >> x.a;
//    return wejscie;
//}
//
//int square(int a)
//{
//    return a * a;
//}
//
//int lekcja6() {
//    X x1, x2(4);
//
//    std::cout << "Dzialanie std::cout << x1: \n";
//    std::cout << x1 << std::endl;
//
//    std::cout << "\nDzialanie X x3 = x1: \n";
//    X x3 = x1; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp:
//
//    std::cout << "\nDzialanie x1 = x2: \n";
//    x1 = x2; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp:
//
//    std::cout << "\nDzialanie x2 = 8: \n";
//    x2 = 8; // Pytanie: jaki element klasy X zostal wywolany w tym miejscu? Odp:
//
//    std::cout << "\nstd::cout << x1 << x2 << x3 \n";
//    std::cout << x1 << " " << x2 << " " << x3 << std::endl;
//
//    std::cout << "\nOperator >> x1: \n";
//    std::cin >> x1;
//    std::cout << "\n" << x1;
//
//    /*
//    std::ofstream plik("X.txt");
//    if (plik.is_open())
//    {
//        plik << x1 << x2;
//        plik.close();
//    }
//    else std::cout << "Unable to open file";
//
//    // Niejawne uzycie operator konwersji operator int()
//    std::cout << std::endl;
//    std::cout << x1 << " podniesiona do kwadratu wynosi: " << square(x1) << std::endl;
//    */
//
//    return 0;
//}