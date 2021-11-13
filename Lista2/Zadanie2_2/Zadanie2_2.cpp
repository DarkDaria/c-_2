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

    Punkt2D(double px, double py) {
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
    void zmien_x(double nowy_x){x = nowy_x;}
};

//
int Zadanie2_2() {
    //Przeanalizować i zanotować różnice między następującymi zapisami:

// const Punkt2D * ptr = new Punkt2D; //nie mozemy zmieniac pol tego obiektu
//    (*ptr).zmien_x(-3);
//    ptr->x = -4;
      //Punkt2D const * ptr = new Punkt2D; = const Punkt2D * ptr = new Punkt2D;  // ruchomy wskaznik stały obiekt
//    Punkt2D * const ptr = new Punkt2D; //staly wskaznik zmienny obiekt
//    const Punkt2D * const = new Punkt2D; //staly wskaznik staly obiekt
//    Punkt2D const * const ptr = new Punkt2D; //staly wskaznik staly obiekt

    return 0;
}