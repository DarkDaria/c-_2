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
//
//    return 0;
//}

//new delete
//zadnanie 4 Napisz funkcję, która tworzy tablice o określonym w argumencie rozmiarze oraz
//funkcje, która uzupełnia te tablice losowymi wartościami z zakresu 1-100 (wykorzystaj
//std::rand()).

#include <iostream>
#include <cstdlib>
#include <ctime>

int * allocate_tab(int size){
    int * tab = new int[size];
    return tab;
}
int msssain() {
    int size;
    std::cin >> size;
    int * tablica = allocate_tab(size);
    for(int i =0; i < size; i++)
    {
        tablica[i] = std::rand() %100 +1;
        std:: cout << tablica[i] <<std::endl;
    }
delete[]tablica;
    return 0;
}
