//zadanie 4
#include <iostream>
#include <string>

using namespace std;
void swap(int *p, int *q)
{
    int temp = *(p);
    *(p) = *(q);
    *(q) = temp;

}

void swap_ref(int & p, int & q)
{
    int temp = p;
    p = q;
    q = temp;
}
void Zadanie1_3()
{
    int a, b, c, d;

    cout << "Wprowadz a: \n";
    cin >> a;
    cout << "Wprowadz b: \n";
    cin >> b;
    cout << "Wprowadz c: \n";
    cin >> c;
    cout << "Wprowadz d: \n";
    cin >> d;
    cout << "\n a przed zmiana: " << a << " b przed zmiana:" << b;
    swap(&a, &b);
    cout << "\n a po zmianie: " << a << " b po zmianie:" << b;

    cout << "\n c przed zmiana: " << c << " d przed zmiana:" << d;
    swap_ref(c, d);
    cout << "\n c po zmianie: " << c << " d po zmianie:" << d;
}


