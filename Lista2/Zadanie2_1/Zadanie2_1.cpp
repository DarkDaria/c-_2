#include <math.h> // funkcje: sqrt(liczba); pow(liczba, stopien_potegi);
#include <iostream>
#include <cstdlib>
// klasa Punkt2D
class Punkt2D {
    double x, y;
public:
    Punkt2D() {
        x = 0;
        y = 0;
        std::cout << "Kontruktor domyslny (bezparametrowy)\n";
    }

    Punkt2D(double px = 0, double py = 0) {
        x = px;
        y = py;
        std::cout << "Kontruktor domyslny parametrowy\n";
    }

    ~Punkt2D() {

        std::cout << "Dekonstruktor\n";
    }

    //funkcja ktora nalezy do klasy to metoda
    double odleglosc(Punkt2D & punkt) {
       return sqrt(((x -punkt.x)) *((x -punkt.x)) + ((y -punkt.y)*(y -punkt.y))); //(,2) pow zamiast nawiasow
    }

    static int func(){
        return 1;
    }
};

//
int Zadanie2_1() {
   // Punkt2D p1; // tworzy punkt o wspolrzednych 0, 0
    Punkt2D p2(1, 1); // tworzy punkt o wspolrzednych 1, 1
    Punkt2D p3(2, 3);
   //std::cout << "Odleglosc p2 od poczatku ukladu wspolrzednych = " << p2.odleglosc(p1) << std::endl;
    std::cout << "Odleglosc miedzy p2 a p3 = " << p2.odleglosc(p3) << std::endl;
    int statyczna = Punkt2D::func();
    return 0;
}