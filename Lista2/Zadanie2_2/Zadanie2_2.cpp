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
//    const Punkt2D * const = new Punkt2D; //staly wskaznik staly obiekt brakuje po const nazwy zmiennej nie bedzie sie to kompilowac
//    Punkt2D const * const ptr = new Punkt2D; //staly wskaznik staly obiekt

    return 0;
}

int fd(){
    const Punkt2D * cptr = new Punkt2D;
    Punkt2D const * cptr2 = new Punkt2D;
    Punkt2D * const cptr3 = new Punkt2D;
    const Punkt2D * const fdsa = new Punkt2D;
    Punkt2D const * const cptr5 = new Punkt2D;
}