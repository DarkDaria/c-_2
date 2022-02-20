//Zadanie3. Napisz funkcje swap(), która pozwoli zamienić wartościami dwie zmienne
//wybranego typu (np. int). Najpierw stwórz wersję z użyciem wskaźników, następnie jej
//odpowiednik z użyciem referencji i porównaj składnię wywołania obydwu wersji


#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 0;
    cont << a << "" << b;
    int &rafa = a;
    int *ptra = &a;
    cont << "Refa: " << refa << endl;
    cont << "a: " << a << endl;
    cont << "Refa: " <<refa << endl;

void swap(int * m, int * n) //ver na wskaznikach
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
void swap_ref( int & m, int & n){
    int temp = m;
    m=n;
    n=temp;
}
swap(a,b) //ref
    return 0;
}
